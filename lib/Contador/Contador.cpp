#include <Arduino.h>
#include "Contador.h"
  
LED_RGB::LED_RGB(const uint8_t red, const uint8_t green, const uint8_t blue){
  _red    = red;
  _green  = green;
  _blue   = blue;

  pinMode(_red,    OUTPUT);
  pinMode(_green,  OUTPUT);
  pinMode(_blue,   OUTPUT);

  digitalWrite(_red,   LOW);
  digitalWrite(_green, LOW);
  digitalWrite(_blue,  LOW);

  randomSeed(analogRead(A0));

}

void LED_RGB::showRandomColor(){

  uint8_t redValue = random(0,2);
  uint8_t greenValue = random(0,2);
  uint8_t blueValue = random(0,2);

  digitalWrite(_red, redValue);
  digitalWrite(_green, greenValue);
  digitalWrite(_blue, blueValue);

}
