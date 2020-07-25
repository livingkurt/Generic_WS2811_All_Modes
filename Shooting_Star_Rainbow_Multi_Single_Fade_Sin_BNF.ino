// Pattern 3
#define GAP_25 5
#define STROBE_25 30
#define RATE_25 10
int start_hue_25;
int delta_hue_25 = 25;

void shooting_star_rainbow_multi_single_fade_sin_bnf()
{
  start_hue_25 = -1 * millis() / RATE_25;
  for (int i = 0; i < 8; i++)
  {
    leds[beatsin16(i + 4, 0, NUM_LEDS - 1)] |= CHSV(start_hue_25, 255, 255);
    start_hue_25 += delta_hue_25;
  }
  fadeToBlackBy(leds, NUM_LEDS, 70);
}
