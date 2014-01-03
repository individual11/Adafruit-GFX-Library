
#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define CLK 8  // MUST be on PORTB!
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
// Last parameter = 'true' enables double-buffering, for flicker-free,
// buttery smooth animation.  Note that NOTHING WILL SHOW ON THE DISPLAY
// until the first call to swapBuffers().  This is normal.
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, true);

int rot = 1;
    
long hue = 6;


void setup() {
  matrix.begin();
}

void loop(){

 matrix.drawEQTriangle(16, 8, 28, rot, matrix.ColorHSV(hue, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 26, rot, matrix.ColorHSV(hue-50, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 24, rot, matrix.ColorHSV(hue-100, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 22, rot, matrix.ColorHSV(hue-150, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 20, rot, matrix.ColorHSV(hue-200, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 18, rot, matrix.ColorHSV(hue-250, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 16, rot, matrix.ColorHSV(hue-300, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 14, rot, matrix.ColorHSV(hue-350, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 12, rot, matrix.ColorHSV(hue-400, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 10, rot, matrix.ColorHSV(hue-450, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 8, rot, matrix.ColorHSV(hue-500, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 6, rot, matrix.ColorHSV(hue-550, 255, 255, true));
 matrix.drawEQTriangle(16, 8, 4, rot, matrix.ColorHSV(hue-600, 255, 255, true));


  rot+=3;
  hue -= 17;
 
 // Update display
  matrix.swapBuffers(false);
  
  //delay(10);
}



