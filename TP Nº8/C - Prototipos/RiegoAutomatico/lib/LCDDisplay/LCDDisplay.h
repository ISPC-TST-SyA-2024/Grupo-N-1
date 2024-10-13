#ifndef LCDDISPLAY_H
#define LCDDISPLAY_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class LCDDisplay {
private:
    LiquidCrystal_I2C lcd;

public:
    LCDDisplay();
    void begin();
    void displayMenu(int menu);
    void updateMenu(int menu, float Humedad_YL69, float Humedad_CAP, bool Lluvia_YL83, int nivel_tanque, bool salidas[]);
};

#endif
