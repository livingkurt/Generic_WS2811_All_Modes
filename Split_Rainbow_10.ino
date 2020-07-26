// Pattern 4

#define RATE_29 10
#define GAP_29 10
#define SPLIT_VALUE 10
int ROW_29 = NUM_LEDS / SPLIT_VALUE;
int start_hue_29;
int delta_hue_29 = 10;

void split_rainbow_10()
{
  Serial.println("pattern_29");
  start_hue_29 = -1 * millis() / RATE_29;
  for (int i = 0; i < ROW_29; i++)
  {
    leds[i] = CHSV(start_hue_29, 255, 255);
    for (int h = 2; h <= SPLIT_VALUE - 2; h += 2)
    {
      leds[backwards_29(h, i)] = CHSV(start_hue_29, 255, 255);
      leds[forwards_29(h, i)] = CHSV(start_hue_29, 255, 255);
    }
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_29, 255, 255);
    start_hue_29 += delta_hue_29;
  };
  FastLED.show();
}

int forwards_29(int placement, int pos)
{
  return (ROW_29 * placement) + pos;
}

int backwards_29(int placement, int pos)
{
  return ROW_29 * placement - 1 - pos;
}