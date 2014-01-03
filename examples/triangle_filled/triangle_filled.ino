
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

int rot = 1,
    rad = 5,
    x = -rad,
    y = -rad,
    rotSpeed = 6,
    xSpeed = 1,
    ySpeed = 1;
    
long hue = 6;


void setup() {
  matrix.begin();
}

void loop(){
  // Clear background
  matrix.fillScreen(0);

 matrix.fillEQTriangle(x, y, rad, rot, matrix.ColorHSV(hue, 255, 255, true));


  rot += rotSpeed;
  x += xSpeed;
  y += ySpeed;
  hue += 3;
  
  if(x > matrix.width() + rad) x = -rad;
  if(y > matrix.height() + rad) y = -rad;
  
 
 // Update display
  matrix.swapBuffers(false);
  
  delay(35);
}



