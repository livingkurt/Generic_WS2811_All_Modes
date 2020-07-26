// Pattern 4

#define RATE_27 10
#define GAP_27 10
#define SPLIT_VALUE 10
int ROW_27 = NUM_LEDS / SPLIT_VALUE;
int start_hue_27;
int delta_hue_27 = 10;

void split_rainbow()
{
  Serial.println("pattern_27");
  start_hue_27 = -1 * millis() / RATE_27;
  for (int i = 0; i < ROW_27; i++)
  {
    leds[i] = CHSV(start_hue_27, 255, 255);

    for (int h = 2; h <= SPLIT_VALUE - 2; h += 2)
    {
      leds[backwards_27(h, i)] = CHSV(start_hue_27, 255, 255);
      leds[forwards_27(h, i)] = CHSV(start_hue_27, 255, 255);
    }

    leds[NUM_LEDS - 1 - i] = CHSV(start_hue_27, 255, 255);
    start_hue_27 += delta_hue_27;
    FastLED.show();
  };
}

int forwards_27(int placement, int pos)
{
  return (ROW_27 * placement) + pos;
}

int backwards_27(int placement, int pos)
{
  return ROW_27 * placement - 1 - pos;
}