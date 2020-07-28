// Pattern 5

void sparkle_rainbow_no_off_all()
{
  int strobe = 10;
  int gap = 0;
  int rate = 10;
  int start_hue;
  int delta_hue = 10;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    int random_leds[NUM_LEDS * 4];
    for (int i = 0; i < NUM_LEDS * 4; i++)
    {
      random_leds[i] = random(NUM_LEDS);
    }
    for (int i = 0; i < NUM_LEDS * 4; i++)
    {
      leds[random_leds[i]] = CHSV(start_hue, 255, 200); // Change To Random LED and change color to White
      hold(strobe);
      FastLED.show();
    }
    for (int i = 0; i < NUM_LEDS * 4; i++)
    {
      leds[random_leds[i]] = CHSV(0, 0, 0); // Change To Random LED and change color to White
      hold(strobe);
      FastLED.show();
    }
    start_hue += delta_hue;
    FastLED.show();
    hold(gap);
  }
}
