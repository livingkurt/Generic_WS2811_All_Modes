
void all_fade_white()
{
  int strobe = 10;
  unsigned long time_now = 0;
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, beatsin16(10, 50, 150))); // Set all to Off.
  hold(strobe);
  FastLED.show();
}