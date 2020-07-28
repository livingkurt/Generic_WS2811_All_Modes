void shooting_star_white_mirror()
{
  int strobe = 10;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] += CHSV(255, 0, 255);
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 30);

    leds[NUM_LEDS - i] += CHSV(255, 0, 255);
    hold(strobe);
    fadeToBlackBy(leds, NUM_LEDS, 30);
    FastLED.show();
  }
}