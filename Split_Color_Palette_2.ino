#define RATE_33 10

int start_index_33;
int index_interval_33 = 5;

DEFINE_GRADIENT_PALETTE(jet_gp_33){
    0, 0, 0, 123,
    17, 0, 0, 255,
    33, 0, 11, 255,
    51, 0, 55, 255,
    68, 0, 135, 255,
    84, 0, 255, 255,
    102, 6, 255, 255,
    119, 41, 255, 123,
    135, 120, 255, 44,
    153, 255, 255, 7,
    170, 255, 255, 0,
    186, 255, 135, 0,
    204, 255, 55, 0,
    221, 255, 11, 0,
    237, 255, 0, 0,
    255, 120, 0, 0};

CRGBPalette16 myPal_33 = jet_gp_33;

void split_color_palette_2()
{
  Serial.println("pattern_33");
  start_index_33 = -1 * millis() / RATE_33;
  for (int i = 0; i < NUM_LEDS / 2; i++)

  {
    leds[i] = ColorFromPalette(myPal_33, start_index_33, BRIGHTNESS, LINEARBLEND);
    leds[NUM_LEDS - 1 - i] = ColorFromPalette(myPal_33, start_index_33, BRIGHTNESS, LINEARBLEND);
    start_index_33 += index_interval_33;
  };
  FastLED.show();
}