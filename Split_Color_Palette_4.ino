

void split_color_palette_4()
{
  int rate = 10;
  int split_value = 4;
  int row = NUM_LEDS / split_value;
  int start_index;
  int index_interval = 5;

  CRGBPalette16 currentPalette = jet_gp;
  start_index = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS / 2; i++)

  {
    leds[i] = ColorFromPalette(currentPalette, start_index, BRIGHTNESS, LINEARBLEND);
    for (int h = 2; h <= split_value - 2; h += 2)
    {
      leds[backwards(row, h, i)] = ColorFromPalette(currentPalette, start_index, BRIGHTNESS, LINEARBLEND);
      leds[forwards(row, h, i)] = ColorFromPalette(currentPalette, start_index, BRIGHTNESS, LINEARBLEND);
    }
    leds[NUM_LEDS - 1 - i] = ColorFromPalette(currentPalette, start_index, BRIGHTNESS, LINEARBLEND);
    start_index += index_interval;
  };
  FastLED.show();
}
