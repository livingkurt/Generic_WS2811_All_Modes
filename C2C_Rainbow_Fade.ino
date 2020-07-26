#define RATE_8 10
#define STROBE_8 50
#define GAP_8 10
#define SPLIT_VALUE_8 10
int start_hue_8;
int delta_hue_8 = 10;
int ROW_8 = NUM_LEDS / SPLIT_VALUE_8;

void c2c_rainbow_fade()
{
  Serial.println("pattern_8");
  for (int i = 0; i < ROW_8; i++)
  {
    // Row 1
    leds[i] = CHSV(255, 0, 255);
    for (int h = 2; h <= SPLIT_VALUE_8 - 2; h += 2)
    {
      leds[backwards(ROW_8, h, i)] = CHSV(start_hue_8, 255, 255);
      leds[forwards(ROW_8, h, i)] = CHSV(start_hue_8, 255, 255);
    }
    leds[NUM_LEDS - 1 - i] = CHSV(255, 0, 255);
    start_hue_8 += delta_hue_8;
    FastLED.show();
    delay(STROBE_8);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}