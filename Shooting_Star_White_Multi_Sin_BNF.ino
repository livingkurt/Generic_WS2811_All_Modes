// Pattern 3
#define GAP_3 5
#define STROBE_3 30

void shooting_star_white_multi_sin_bnf()
{
  for (int i = 0; i < 8; i++)
  {
    leds[beatsin16(i + 4, 0, NUM_LEDS - 1)] |= CHSV(255, 0, 255);
  }
  fadeToBlackBy(leds, NUM_LEDS, 50);
}