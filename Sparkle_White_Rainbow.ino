#define STROBE_11 20
#define RATE_11 10
int start_hue_11;
int delta_hue_11 = 20;

void sparkle_white_rainbow()
{
  delta_hue_11 = 20;
  start_hue_11 = -1 * millis() / RATE_11;
  fill_solid(leds, NUM_LEDS, CHSV(start_hue_11, 255, 200)); // Set all to red.
  FastLED.show();
  int rand = random(NUM_LEDS);
  int random_leds[5];
  for (int i = 0; i < 5; i++)
  {
    random_leds[i] = random(NUM_LEDS);
  }
  for (int i = 0; i < 5; i++)
  {
    leds[random_leds[i]] = CHSV(0, 0, 255); // Change To Random LED and change color to White
  }
  FastLED.show();
  FastLED.delay(STROBE_11);
  start_hue_11 += delta_hue_11;
}