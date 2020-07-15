// #define RATE_7 10
// #define STROBE_7 100
// #define GAP_7 10
// #define NUM_X_7 12
// int start_hue_7;
// int delta_hue_7 = 20;
// int ROW_7 = NUM_LEDS / 3;

// void c_2_c_white()
// {
//   Serial.println("pattern_7");
//   start_hue_7 = -1 * millis() / RATE_7;
//   for (int i = 0; i < ROW_7; i++)
//   {
//     // Row 1
//     leds[i] = CHSV(start_hue_7, 0, 255);
//     // Row 2
//     leds[ROW_7 + i] = CHSV(start_hue_7, 0, 255);
//     // Row 3
//     leds[i + (ROW_7 * 2)] = CHSV(start_hue_7, 0, 255);
//     // Row 4
//     leds[ROW_7 * 4 - 1 - i] = CHSV(start_hue_7, 0, 255);
//     // Row 5
//     leds[ROW_7 * 5 - 1 - i] = CHSV(start_hue_7, 0, 255);
//     // Row 6
//     leds[ROW_7 * 5 + i] = CHSV(start_hue_7, 0, 255);
//     // Row 7
//     leds[i + ROW_7 * 6] = CHSV(start_hue_7, 0, 255);
//     // Row 8
//     leds[ROW_7 * 8 - 1 - i] = CHSV(start_hue_7, 0, 255);
//     // Row 9
//     leds[i + ROW_7 * 8] = CHSV(start_hue_7, 0, 255);
//     // Row 10
//     leds[ROW_7 * 10 - 1 - i] = CHSV(start_hue_7, 0, 255);
//     // Row 11
//     leds[i + ROW_7 * 10] = CHSV(start_hue_7, 0, 255);
//     // Row 12
//     leds[NUM_LEDS - 1 - i] = CHSV(start_hue_7, 0, 255);

//     start_hue_7 += delta_hue_7;
//     FastLED.show();
//     delay(STROBE_7);
//     fadeToBlackBy(leds, NUM_LEDS, 200);
//     FastLED.show();
//   };
// // }


#define RATE_9 10
#define STROBE_9 100
#define GAP_9 10
#define NUM_X_9 12
int ROW_9 = NUM_LEDS / NUM_X_9;

void c2c_white()
{
  Serial.println("pattern_9");
  for (int i = 0; i < ROW_9; i++)
  {
    // Row 1
    leds[i] = CHSV(255, 0, 255);
    // Row 2
    leds[ROW_9 + i] = CHSV(255, 0, 255);
    // Row 3
    leds[i + (ROW_9 * 2)] = CHSV(255, 0, 255);
    // Row 4
    leds[ROW_9 * 4 - 1 - i] = CHSV(255, 0, 255);
    // Row 5
    leds[ROW_9 * 5 - 1 - i] = CHSV(255, 0, 255);
    // Row 6
    leds[ROW_9 * 5 + i] = CHSV(255, 0, 255);
    // Row 8
    leds[i + ROW_9 * 6] = CHSV(255, 0, 255);
    // Row 8
    leds[ROW_9 * 8 - 1 - i] = CHSV(255, 0, 255);
    // Row 9
    leds[i + ROW_9 * 8] = CHSV(255, 0, 255);
    // Row 10
    leds[ROW_9 * 10 - 1 - i] = CHSV(255, 0, 255);
    // Row 11
    leds[i + ROW_9 * 10] = CHSV(255, 0, 255);
    // Row 12
    leds[NUM_LEDS - 1 - i] = CHSV(255, 0, 255);

    FastLED.show();
    delay(STROBE_9);
    fadeToBlackBy(leds, NUM_LEDS, 100);
    FastLED.show();
  };
}