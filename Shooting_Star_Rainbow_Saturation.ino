// Pattern 3
#define GAP_38 20
#define STROBE_38 30
#define RATE_38 10
int start_hue_38;
int delta_hue_38 = 5;

void shooting_star_rainbow_saturation()
{
  Serial.println("pattern_38");
  start_hue_38 = -1 * millis() / RATE_38;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(start_hue_38, random(100, 255), 255);
    delay(STROBE_38);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
    start_hue_38 += delta_hue_38;
  }
}