#include "LCDDisplay.h"

LCDDisplay::LCDDisplay() : lcd(0x27, 20, 2) {}

void LCDDisplay::begin() {
    lcd.begin(20, 2, 0);
    lcd.backlight();
}

void LCDDisplay::displayMenu(int menu) {
    lcd.clear();
    switch (menu) {
        case 0:
            lcd.print("HUMEDAD DEL SUELO: ");
            break;
        case 1:
            lcd.print("RIEGO: ");
            break;
        case 2:
            lcd.print("Estado Bomba/E_valv: ");
            break;
    }
}

void LCDDisplay::updateMenu(int menu, float Humedad_YL69, float Humedad_CAP, bool Lluvia_YL83, int nivel_tanque, bool Salidas[]) {
    lcd.setCursor(0, 1);
    switch (menu) {
        case 0:
            if (Lluvia_YL83 == true){
                lcd.setCursor(6, 0);
                lcd.print("Lluvia");
                lcd.setCursor(0, 1);
                lcd.print("Lectura interrumpida");
            }
            else{
            lcd.print("Z1: ");
            lcd.print(Humedad_YL69);
            lcd.print("Z2: ");
            lcd.print(Humedad_CAP);
            }
            break;
        case 1:
            if (Lluvia_YL83 == true){
                lcd.setCursor(6, 0);
                lcd.print("Lluvia");
                lcd.setCursor(0, 1);
                lcd.print("Riego interrumpido");
            }
            else{
            lcd.print("Bomba: ");
            lcd.print(Salidas[0]);
            lcd.print("EVZ1: ");
            lcd.print(Salidas[1]);
            lcd.print("EVZ2: ");
            lcd.print(Salidas[2]);
            break;
        case 2:
            lcd.print("Nivel: ");
            lcd.print(nivel_tanque);
            lcd.print(" EV_T: ");
            lcd.print(Salidas[3]);
            break;
    }
}
