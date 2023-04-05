#ifndef CONTADOR_H
#define CONTADOR_H

#include <Arduino.h>

class LED_RGB {
    private:
     uint8_t _red;
     uint8_t _green;
     uint8_t _blue;

    public:
        LED_RGB(uint8_t red, uint8_t green, uint8_t blue);

        void showRandomColor();
};

#endif // CONTADOR_H
