#include <Arduino.h>
#include "Contador.h"

LED_RGB miLED(2,3,4);

void setup() {
}
 
void loop() {
  miLED.showRandomColor();
}
