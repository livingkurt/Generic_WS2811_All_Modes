// Pattern 4

#define RATE_28 10
#define GAP_28 10
#define SPLIT_VALUE 4
int ROW_28 = NUM_LEDS / SPLIT_VALUE;
int start_hue_28;
int delta_hue_28 = 10;

void split_rainbow_4()
{
  Serial.println("pattern_28");
  start_hue_28 = -1 * millis() / RATE_28;
  for (int i = 0; i < ROW_28; i++)
  {
    leds[i] = CHSV(start_hue_28, 255, 255);
    leds[backwards_28(2, i)] = CHSV(start_hue_28, 255, 255);
    leds[forwards_28(2, i)] = CHSV(start_hue_28, 255, 255);
    leds[(NUM_LEDS)-1 - i] = CHSV(start_hue_28, 255, 255);
    start_hue_28 += delta_hue_28;
  };
  FastLED.show();
}

int forwards_28(int placement, int pos)
{
  return (ROW_28 * placement) + pos;
}

int backwards_28(int placement, int pos)
{
  return ROW_28 * placement - 1 - pos;
}