

void shooting_star_rainbow_multi_speed_control_bnf()
{
  int rate = 10;
  int start_hue;
  int delta_hue = 25;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < 10; i++)
  {
    leds[beat8(i + 1, 0)] |= CHSV(start_hue, 255, 255);
    start_hue += delta_hue;
  }
  fadeToBlackBy(leds, NUM_LEDS, 100);
}
