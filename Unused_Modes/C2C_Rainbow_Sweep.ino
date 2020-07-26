
#define RATE_13 10
#define NUM_X_13 12

int start_hue_13;
int delta_hue_13 = 10;

int ROW_13 = NUM_LEDS / NUM_X_13;

void c2c_rainbow_sweep()
{
  start_hue_13 = -1 * millis() / RATE_13;
  for (int i = 0; i < ROW_13; i++)
  {

    // Row 2
    leds[ROW_13 * 2 - i - 1] = CHSV(start_hue_13, 255, 255);
    // Row 3
    leds[i + ROW_13 * 2] = CHSV(start_hue_13, 255, 255);

    // // Row 1
    leds[ROW_13 - 1 - i] = CHSV(start_hue_13 + 150, 255, 255);
    // Row 4
    leds[i + ROW_13 * 3] = CHSV(start_hue_13 + 150, 255, 255);

    // Row 7
    leds[ROW_13 * 7 - 1 - i] = CHSV(start_hue_13 + 150, 255, 255);
    // Row 8
    leds[i + ROW_13 * 7] = CHSV(start_hue_13 + 150, 255, 255);

    // Row 5
    leds[ROW_13 * 4 + i] = CHSV(start_hue_13 + 50, 255, 255);
    // Row 6
    leds[ROW_13 * 6 - i - 1] = CHSV(start_hue_13 + 50, 255, 255);

    // Row 9
    leds[ROW_13 * 8 + i] = CHSV(start_hue_13 + 50, 255, 255);
    // Row 12
    leds[ROW_13 * 12 - i - 1] = CHSV(start_hue_13 + 50, 255, 255);

    // Row 10
    leds[ROW_13 * 9 + i] = CHSV(start_hue_13 + 200, 255, 255);
    // Row 11
    leds[ROW_13 * 11 - 1 - i] = CHSV(start_hue_13 + 200, 255, 255);

    start_hue_13 += delta_hue_13;
    FastLED.show();
  };
}

// #define RATE_8 10
// #define STROBE_8 50
// #define GAP_8 10
// #define SPLIT_VALUE_8 10
// int start_hue_8;
// int delta_hue_8 = 10;
// int ROW_8 = NUM_LEDS / SPLIT_VALUE_8;

// void c2c_rainbow_fade()
// {
//   Serial.println("pattern_8");
//   for (int i = 0; i < ROW_8; i++)
//   {
//     // Row 1
//     leds[i] = CHSV(255, 0, 255);
//     for (int h = 2; h <= SPLIT_VALUE_8 - 2; h += 2)
//     {
//       leds[backwards(ROW_8, h, i)] = CHSV(start_hue_8, 255, 255);
//       leds[forwards(ROW_8, h, i)] = CHSV(start_hue_8, 255, 255);
//     }
//     leds[NUM_LEDS - 1 - i] = CHSV(255, 0, 255);
//     start_hue_8 += delta_hue_8;
//     FastLED.show();
//     delay(STROBE_8);
//     fadeToBlackBy(leds, NUM_LEDS, 100);
//     FastLED.show();
//   };
// }