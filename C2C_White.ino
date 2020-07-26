#define RATE_9 10
#define STROBE_9 50
#define GAP_9 10
#define SPLIT_VALUE_9 10
int ROW_9 = NUM_LEDS / SPLIT_VALUE_9;

void c2c_white()
{
  Serial.println("pattern_9");
  for (int i = 0; i < ROW_9; i++)
  {
    // Row 1
    leds[i] = CHSV(255, 0, 255);
    for (int h = 2; h <= SPLIT_VALUE_9 - 2; h += 2)
    {
      leds[backwards(ROW_9, h, i)] = CHSV(255, 0, 255);
      leds[forwards(ROW_9, h, i)] = CHSV(255, 0, 255);
    }
    leds[NUM_LEDS - 1 - i] = CHSV(255, 0, 255);

    FastLED.show();
    delay(STROBE_9);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}