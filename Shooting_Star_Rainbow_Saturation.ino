// Pattern 3
#define GAP_20 20
#define STROBE_20 30
#define RATE_20 10
int start_hue_20;
int delta_hue_20 = 5;

void shooting_star_rainbow_saturation()
{
  Serial.println("pattern_20");
  start_hue_20 = -1 * millis() / RATE_20;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(start_hue_20, random(100, 255), 255);
    delay(STROBE_20);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
    start_hue_20 += delta_hue_20;
  }
}