
// Pattern 1
#define RATE_39 20
int start_hue_39;
int delta_hue_39 = 3;
int count = 255;

void cycle_rainbow_desaturated()
{
  Serial.println("pattern_39");
  start_hue_39 = -1 * millis() / RATE_39;
  for (int i = 0; i < NUM_LEDS; i++)

  {
    leds[i] = CHSV(start_hue_39, 100, 255);
    start_hue_39 += delta_hue_39;
    if (count == 0)
    {
      count += delta_hue_39;
    }
    else
    {
      count -= delta_hue_39;
    }
  };
  FastLED.show();
}