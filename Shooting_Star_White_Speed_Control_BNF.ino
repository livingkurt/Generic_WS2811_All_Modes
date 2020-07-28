

void shooting_star_white_speed_control_bnf()
{
  int pos = beatsin16(5, 0, NUM_LEDS);
  leds[pos] = CHSV(255, 0, 255);
  fadeToBlackBy(leds, NUM_LEDS, 50);
  FastLED.show();
}