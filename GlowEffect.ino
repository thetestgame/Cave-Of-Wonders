

#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define LED            6
#define NUMPIXELS      110

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LED, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
   for (int b=255;b>0; b--)  {
        for(int i=0;i<NUMPIXELS;i++){
          pixels.setPixelColor(i, pixels.Color(b, 0, 0)); 
        }
        pixels.show();
        delay(10);
    }
    delay(10);
    for (int b=0;b<255; b++)  {
        for(int i=0;i<NUMPIXELS;i++){
          pixels.setPixelColor(i, pixels.Color(b, 0, 0)); 
        }
        pixels.show();
        delay(10);
     }
}
