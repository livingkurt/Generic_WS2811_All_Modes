// Pattern 4

#define RATE_30 10
#define GAP_30 10
#define SPLIT_VALUE_30 2
int ROW_30 = NUM_LEDS / SPLIT_VALUE_30;
int start_hue_30;
int delta_hue_30 = 10;

void split_rainbow_2()
{
  Serial.println("pattern_30");
  start_hue_30 = -1 * millis() / RATE_30;
  for (int i = 0; i < ROW_30; i++)
  {
    leds[i] = CHSV(start_hue_30, 255, 255);
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_30, 255, 255);
    start_hue_30 += delta_hue_30;
  };
  FastLED.show();
}
