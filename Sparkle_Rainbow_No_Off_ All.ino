// Pattern 5
#define STROBE_36 10
#define GAP_36 0
#define RATE_36 10
int start_hue_36;
int delta_hue_36 = 10;

void sparkle_rainbow_no_off_all()
{
  start_hue_36 = -1 * millis() / RATE_36;
  Serial.println("pattern_36");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    int random_leds[400];
    for (int i = 0; i < 400; i++)
    {
      random_leds[i] = random(NUM_LEDS);
    }
    for (int i = 0; i < 400; i++)
    {
      leds[random_leds[i]] = CHSV(start_hue_36, 255, 200); // Change To Random LED and change color to White
      // FastLED.delay(STROBE_36);
      FastLED.show();
    }
    for (int i = 0; i < 400; i++)
    {
      leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      // FastLED.delay(STROBE_36);
      FastLED.show();
    }
    start_hue_36 += delta_hue_36;
    FastLED.show();
    FastLED.delay(GAP_36);
  }
}
