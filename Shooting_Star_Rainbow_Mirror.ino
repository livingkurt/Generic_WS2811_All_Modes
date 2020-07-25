// Pattern 3
#define GAP_21 20
#define STROBE_21 10
#define RATE_21 10
int start_hue_21;
int delta_hue_21 = 5;

void shooting_star_rainbow_mirror()
{
  Serial.println("pattern_21");
  start_hue_21 = -1 * millis() / RATE_21;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(start_hue_21, 255, 255);
    delay(STROBE_21);
    fadeToBlackBy(leds, NUM_LEDS, 30);

    leds[NUM_LEDS - i] += CHSV(start_hue_21, 255, 255);
    delay(STROBE_21);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
    start_hue_21 += delta_hue_21;
  }
}