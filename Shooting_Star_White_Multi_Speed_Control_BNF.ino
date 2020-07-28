

void shooting_star_white_multi_speed_control_bnf()
{
  for (int i = 0; i < 8; i++)
  {
    leds[beatsin16(i + 4, 0, NUM_LEDS - 1)] |= CHSV(255, 0, 255);
  }
  fadeToBlackBy(leds, NUM_LEDS, 50);
}