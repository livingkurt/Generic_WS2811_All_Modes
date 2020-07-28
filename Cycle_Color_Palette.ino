void cycle_color_palette()
{
  int rate = 10;
  int start_index;
  int index_interval = 5;
  CRGBPalette16 palette = jet_gp;
  start_index = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = ColorFromPalette(palette, start_index, BRIGHTNESS, LINEARBLEND);
    start_index += index_interval;
  };
  FastLED.show();
}