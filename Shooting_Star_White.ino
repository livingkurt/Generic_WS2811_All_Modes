// Pattern 3
#define GAP_3 20
#define STROBE_3 30

void shooting_star_white()
{
  Serial.println("pattern_3");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(255, 0, 255);
    delay(STROBE_3);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
  }
}