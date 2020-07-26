// Pattern 5
#define STROBE_5 20
#define GAP_5 0
#define RATE_5 10
int start_hue_5;
int delta_hue_5 = 5;

void sparkle_rainbow_all_fade()
{
  start_hue_5 = -1 * millis() / RATE_5;
  Serial.println("pattern_5");
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
        leds[random_leds[i]] = CHSV(start_hue_5, 255, random(0, 255)); // Change To Random LED and change color to White
      }
      FastLED.show();
      FastLED.delay(STROBE_5);
      for (int i = 0; i < 10; i++)
      {
        leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      }
      FastLED.show();
    }
    start_hue_5 += delta_hue_5;
  }
}