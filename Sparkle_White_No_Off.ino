// Pattern 5
#define STROBE_35 10
#define GAP_35 0
#define RATE_35 10
int start_hue_35;
int delta_hue_35 = 5;

void sparkle_white_no_off()
{
  start_hue_35 = -1 * millis() / RATE_35;
  Serial.println("pattern_35");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    int random_leds[255];
    for (int i = 0; i < 255; i++)
    {
      random_leds[i] = random(NUM_LEDS);
    }
    for (int i = 0; i < 255; i++)
    {
      leds[random_leds[i]] = CHSV(0, 0, 200); // Change To Random LED and change color to White
      FastLED.delay(STROBE_35);
      FastLED.show();
    }
    for (int i = 0; i < 255; i++)
    {
      leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      FastLED.delay(STROBE_35);
      FastLED.show();
    }
    start_hue_35 += delta_hue_35;
    FastLED.show();
    FastLED.delay(GAP_35);
  }
}
