// Pattern 3
#define GAP_26 5
#define STROBE_26 30
#define RATE_26 10
int start_hue_26;
int delta_hue_26 = 25;

void shooting_star_rainbow_multi_sin_bnf()
{
  Serial.println("pattern_26");
  start_hue_26 = -1 * millis() / RATE_26;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(start_hue_26, 255, 255);
    // leds[i + 25] += CHSV(start_hue_26 + 25, 255, 255);
    delay(STROBE_26);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
    start_hue_26 += delta_hue_26;
  }
}
