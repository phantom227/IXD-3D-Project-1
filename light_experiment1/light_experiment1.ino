/*
  * Reference from Doug Whitton's Week 1 tutorial 
  * The colorWipe method is called from the loop ()
  * strip is a variable name for the Adafruit_NeoPixel object
  * The color is random
  * modified by Malcolm Darko
  
*/

#include <Adafruit_NeoPixel.h>

// The pin from the Arduino that is connected to the NeoPixels
#define LED_PIN     6

// The amount of NeoPixels that are attached to Arduino
#define LED_COUNT 1

// Declaring the NeoPixel strip object:
// The constructor:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// ^ the variable name: strip, can be changed. But you will have to go through the
// whole code and change the name; strip to the new variable name you've created.

//start up:
void setup() {
  // put your setup code here, to run once:

  strip.begin();              // INITIALIZE NeoPixel strip object
  strip.show();               // Turn OFF all pixels ASAP
  strip.setBrightness(40);    // Sets the BRIGHTNESS

}

void loop() { 

  // Fills along the length using seperate channels
   colorWipe(strip.Color(205, 0, 0), 100); // Red
   colorWipe(strip.Color(0, 155, 0), 150); // Green
   colorWipe(strip.Color(0, 0, 45), 100); // Blue
  
  // Fills the NeoPixels with a strip of various colors:
//   colorWipe(strip.Color(random(255), random(255), random(255)), 500);                  // randomized array of color
  // colorWipe(strip.Color(random(100, 255), random(75, 255), random(195, 255)), 500);    // first array of color
  // colorWipe(strip.Color(34, 156, 98), 300);                                              // second array of color
//   colorWipe(strip.Color(random(50, 155), random(10, 55), random(117, 255)), 100);          // third array of color
  // colorWipe(strip.Color(random(10, 255), random(100, 195), random(187, 195)), 1000);     //fourth array of color
  // colorWipe(strip.Color(217, 25, 90), 50);                                               //fifth array of color
//  colorWipe(strip.Color(255,0,0), 1000); // R ~ red G ~ green B ~ blue 1000 milliseconds = 1 second

   
    
}

  // Functions for creating animation effects

  // -- NOTES FROM THE LECTURE --

  // Fill strip pixels one after another with a color. Strip IS NOT cleared
  // first anything there will be covered pixel by pixel. Passes in color
  // strip.Color(red, green, blue) should be included in the loop() function. Placed above
  // and a delay time between pixels, to help transition new colors

void colorWipe(uint32_t color, int wait) { // int creates a variable telling the color to wait
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip
    strip.setPixelColor(i, color);         // Sets pixel's in color
    strip.show();                          // Updates strip to match
    delay(wait);                           // Pauses for a while
  }

}
