#define RATE_34 10
#define SPLIT_VALUE_34 4
int ROW_34 = NUM_LEDS / SPLIT_VALUE_34;
int start_index_34;
int index_interval_34 = 5;

DEFINE_GRADIENT_PALETTE(jet_gp_34){
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

CRGBPalette16 myPal_34 = jet_gp_34;

void split_color_palette_4()
{
  Serial.println("pattern_34");
  start_index_34 = -1 * millis() / RATE_34;
  for (int i = 0; i < NUM_LEDS / 2; i++)

  {
    leds[i] = ColorFromPalette(myPal_34, start_index_34, BRIGHTNESS, LINEARBLEND);
    for (int h = 2; h <= SPLIT_VALUE_34 - 2; h += 2)
    {
      leds[backwards(ROW_34, h, i)] = ColorFromPalette(myPal_34, start_index_34, BRIGHTNESS, LINEARBLEND);
      leds[forwards(ROW_34, h, i)] = ColorFromPalette(myPal_34, start_index_34, BRIGHTNESS, LINEARBLEND);
    }
    leds[NUM_LEDS - 1 - i] = ColorFromPalette(myPal_34, start_index_34, BRIGHTNESS, LINEARBLEND);
    start_index_34 += index_interval_34;
  };
  FastLED.show();
}
