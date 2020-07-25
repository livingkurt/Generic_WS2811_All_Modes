// Pattern 5
#define STROBE_19 20
#define GAP_19 0
#define RATE_19 10
int start_hue_19;
int delta_hue_19 = 5;

void sparkle_saturation_rainbow()
{
  start_hue_19 = -1 * millis() / RATE_19;
  Serial.println("pattern_19");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      int random_leds[10];
      for (int i = 0; i < 10; i++)
      {
        random_leds[i] = random(NUM_LEDS);
      }
      for (int i = 0; i < 10; i++)
      {
        leds[random_leds[i]] = CHSV(start_hue_19, random(127, 255), random(0, 255)); // Change To Random LED and change color to White
      }
      FastLED.show();
      FastLED.delay(STROBE_19);
      for (int i = 0; i < 10; i++)
      {
        leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      }
      FastLED.show();
    }
    start_hue_19 += delta_hue_19;
  }
}