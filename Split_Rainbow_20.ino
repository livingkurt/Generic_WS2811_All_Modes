// Pattern 4

#define RATE_32 10
#define GAP_32 10
#define SPLIT_VALUE 20
int ROW_32 = NUM_LEDS / SPLIT_VALUE;
int start_hue_32;
int delta_hue_32 = 10;

void split_rainbow_20()
{
  Serial.println("pattern_32");
  start_hue_32 = -1 * millis() / RATE_32;
  for (int i = 0; i < ROW_32; i++)
  {
    leds[i] = CHSV(start_hue_32, 255, 255);
    for (int h = 2; h <= SPLIT_VALUE - 2; h += 2)
    {
      leds[backwards_32(h, i)] = CHSV(start_hue_32, 255, 255);
      leds[forwards_32(h, i)] = CHSV(start_hue_32, 255, 255);
    }
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_32, 255, 255);
    start_hue_32 += delta_hue_32;
  };
  FastLED.show();
}

int forwards_32(int placement, int pos)
{
  return (ROW_32 * placement) + pos;
}

int backwards_32(int placement, int pos)
{
  return ROW_32 * placement - 1 - pos;
}