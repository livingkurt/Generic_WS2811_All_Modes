// Pattern 3
#define GAP_3 5
#define STROBE_3 30
#define RATE_24 10
int start_hue_24;
int delta_hue_24 = 1;

void shooting_star_rainbow_multi_all_fade_sin_bnf()
{
  start_hue_24 = -1 * millis() / RATE_24;
  for (int i = 0; i < 8; i++)
  {
    leds[beatsin16(i + 4, 0, NUM_LEDS - 1)] |= CHSV(start_hue_24, 255, 255);
    start_hue_24 += delta_hue_24;
  }
  fadeToBlackBy(leds, NUM_LEDS, 70);
}
