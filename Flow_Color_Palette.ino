 #define RATE_43 10
int start_hue_43;
int delta_hue_43 = 10;

CRGBPalette16 palette_43 = jet_gp;  
                                    // Number of tweens between palettes.

void flow_color_palette()
{                                            // no x/y shifting but scrolling along 

  uint8_t scale = 1000;                                       // the "zoom factor" for the noise
  start_hue_43 = -1 * millis() / RATE_43;
  for (uint16_t i = 0; i < NUM_LEDS; i++) {

    uint16_t shift_x = 4223;                                  // no movement along x and y
    uint16_t shift_y = 1234;

    // uint16_t shift_x = 2000;                                  // no movement along x and y
    // uint16_t shift_y = 1000;

    uint32_t real_x = (i + shift_x) * scale;                  // calculate the coordinates within the noise field
    uint32_t real_y = (i + shift_y) * scale;                  // based on the precalculated positions
    uint32_t real_z = millis()*2;                             // increment z linear

    uint8_t noise = inoise16(real_x, real_y, real_z) >> 7;    // get the noise data and scale it down

    uint8_t index = sin8(noise*3);                            // map led color based on noise data
    uint8_t bri   = noise;

    leds[i] = ColorFromPalette(palette_43, index, BRIGHTNESS, LINEARBLEND);   // With that value, look up the 8 bit colour palette value and assign it to the current LED.
    // leds[i] = CHSV(index, 255, 255);
    // start_hue_43 += delta_hue_43;
  }
  FastLED.show();
  
} // noise16_3()