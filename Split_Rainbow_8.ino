// Pattern 4

#define RATE_31 10
#define GAP_31 10
#define SPLIT_VALUE_31 8
int ROW_31 = NUM_LEDS / SPLIT_VALUE_31;
int start_hue_31;
int delta_hue_31 = 10;

void split_rainbow_8()
{
  Serial.println("pattern_31");
  start_hue_31 = -1 * millis() / RATE_31;
  for (int i = 0; i < ROW_31; i++)
  {
    leds[i] = CHSV(start_hue_31, 255, 255);
    for (int h = 2; h <= SPLIT_VALUE_31 - 2; h += 2)
    {
      leds[backwards(ROW_31, h, i)] = CHSV(start_hue_31, 255, 255);
      leds[forwards(ROW_31, h, i)] = CHSV(start_hue_31, 255, 255);
    }
    leds[(NUM_LEDS)-1 - i] = CHSV(start_hue_31, 255, 255);
    start_hue_31 += delta_hue_31;
  };
  FastLED.show();
}
