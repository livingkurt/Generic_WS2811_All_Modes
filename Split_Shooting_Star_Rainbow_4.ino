

void split_shooting_star_rainbow_4()
{
  int rate = 10;
  int strobe = 50;
  int split_value = 4;
  int start_hue;
  int delta_hue = 10;
  int row = NUM_LEDS / split_value;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < row; i++)
  {
    // Row 1
    leds[i] = CHSV(start_hue, 0, 255);
    leds[backwards(row, 2, i)] = CHSV(start_hue, 255, 255);
    leds[forwards(row, 2, i)] = CHSV(start_hue, 255, 255);
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue, 0, 255);
    start_hue += delta_hue;
    FastLED.show();
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}