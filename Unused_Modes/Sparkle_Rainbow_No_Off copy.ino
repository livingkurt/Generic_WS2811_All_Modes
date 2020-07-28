// Pattern 5
#define STROBE_37 10
#define GAP_37 0
#define RATE_37 10
int start_hue_37;
int delta_hue_37 = 1;

void sparkle_rainbow_no_of()
{
  start_hue_37 = -1 * millis() / RATE_37;
  Serial.println("pattern_37");
  for (int i = 0; i < NUM_LEDS; i++)
  {
    int random_leds[400];
    for (int i = 0; i < 400; i++)
    {
      random_leds[i] = random(NUM_LEDS);
    }
    for (int i = 0; i < 400; i++)
    {
      leds[random_leds[i]] = CHSV(start_hue_37, random(100,255), random(100,255)); // Change To Random LED and change color to White
      // FastLED.delay(STROBE_37);
      FastLED.show();
      start_hue_37 += delta_hue_37;
    }
    
    // for (int i = 0; i < 400; i++)
    // {
    //   leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
    //   // FastLED.delay(STROBE_37);
    //   FastLED.show();
    // }

    FastLED.show();
    FastLED.delay(GAP_37);
  }
}