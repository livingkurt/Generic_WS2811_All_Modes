// Pattern 5
#define STROBE_18 10
#define GAP_18 0
#define RATE_18 10
int start_hue_18;
int delta_hue_18 = 5;

void sparkle_no_off_rainbow()
{
  start_hue_18 = -1 * millis() / RATE_18;
  Serial.println("pattern_18");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 100; i++)
    {
      int rand = random(NUM_LEDS);
      leds[rand] = CHSV(start_hue_18, 255, random(0, 255)); // Change To Random LED and change color to White
      FastLED.delay(STROBE_18);
      FastLED.show();
      // leds[rand] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      // FastLED.show();
      // delay(STROBE_18);
    }
    start_hue_18 += delta_hue_18;
    FastLED.show();
    FastLED.delay(GAP_18);
  }
}