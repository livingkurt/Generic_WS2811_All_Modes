// Pattern 3
#define GAP_3 20
#define STROBE_3 30

void shooting_star_white_sin_bnf()
{
  Serial.println("pattern_3");
  int pos = beatsin16(5, 0, NUM_LEDS);
  leds[pos] = CHSV(255, 0, 255);
  fadeToBlackBy(leds, NUM_LEDS, 50);
  FastLED.show();
}