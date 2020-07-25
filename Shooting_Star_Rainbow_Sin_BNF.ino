// Pattern 3
#define GAP_22 20
#define STROBE_22 30
#define RATE_22 10
int start_hue_22;
int delta_hue_22 = 20;

void shooting_star_rainbow_sin_bnf()
{
  Serial.println("pattern_22");
  start_hue_22 = -1 * millis() / RATE_22;
  int pos = beatsin16(5, 0, NUM_LEDS);
  leds[pos] = CHSV(start_hue_22, 255, 255);
  fadeToBlackBy(leds, NUM_LEDS, 50);
  FastLED.show();
  start_hue_22 += delta_hue_22;
}