

void sparkle_rainbow_no_off()
{
  int strobe = 10;
  int gap = 0;
  int rate = 10;
  int start_hue;
  int delta_hue = 5;
  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    for (int i = 0; i < NUM_LEDS / 2; i++)
    {
      int rand = random(NUM_LEDS);
      leds[rand] = CHSV(start_hue, 255, random(0, 255)); // Change To Random LED and change color to White
      hold(strobe);
      FastLED.show();
    }
    start_hue += delta_hue;
    FastLED.show();
    hold(gap);
  }
}