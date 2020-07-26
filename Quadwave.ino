// Pattern 3
uint8_t V; //brightness for rainbow
uint8_t S; //saturation for rainbow
boolean toggleS;
boolean toggleV;

//Amount to tint (desaturate) rainbow.  Can use either RGB or HSV format
//CRGB tintAmt(128,128,128);
CHSV tintAmt(0, 0, 90);

void quadwave()
{
  fill_rainbow(leds, NUM_LEDS, millis() / 100); //fill strip with moving rainbow

  EVERY_N_SECONDS(5) { toggleS = !toggleS; } //toggle Saturation (ie. "tint")
  EVERY_N_SECONDS(5) { toggleV = !toggleV; } //toggle Value (brightness)

  if (toggleS)
  {
    for (uint8_t i = 0; i < NUM_LEDS; i++)
    {
      leds[i] += tintAmt;
    }
  }
  else
  {
    //No tint added
  }

  if (toggleV)
  {
    V = 128;                          //fade down by V/256
    fadeToBlackBy(leds, NUM_LEDS, V); //fade by value V
  }
  else
  {
    V = 0; //no fade
  }

  FastLED.show();
}