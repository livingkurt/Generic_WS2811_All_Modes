
void all_fade_white()
{
  int strobe = 10;
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, beatsin16(10, 50, 150))); // Set all to Off.
  hold(strobe);
  FastLED.show();
}

// void loop()
// {
//    for(int i = 0; i < NUM_LEDS; i++ )
//    {
//    leds[i].setRGB(0,255,0);  // setRGB functions works by setting
//                              // (RED value 0-255, GREEN value 0-255, BLUE value 0-255)
//                              // RED = setRGB(255,0,0)
//                              // GREEN = setRGB(0,255,0)
//    leds[i].fadeLightBy(brightness);
//   }
//   FastLED.show();
//   brightness = brightness + fadeAmount;
//   // reverse the direction of the fading at the ends of the fade:
//   if(brightness == 0 || brightness == 255)
//   {
//     fadeAmount = -fadeAmount ;
//   }
//   delay(20);  // This delay sets speed of the fade. I usually do from 5-75 but you can always go higher.
// }