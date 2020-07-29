void flow_color_palette_simple()
{
  CRGBPalette16 currentPalette = jet_gp;
  int scale = 30; // Don't change this programmatically or everything shakes.

  for (int i = 0; i < NUM_LEDS; i++)
  {                                                                      // Just ONE loop to fill up the LED array as all of the pixels change.
    uint8_t index = inoise8(i * scale, millis() / 10 + i * scale);       // Get a value from the noise function. I'm using both x and y axis.
    leds[i] = ColorFromPalette(currentPalette, index, 255, LINEARBLEND); // With that value, look up the 8 bit colour palette value and assign it to the current LED.
  }
}