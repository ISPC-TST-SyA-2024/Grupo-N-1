#ifndef SENSOR_HUMEDAD_H
#define SENSOR_HUMEDAD_H

#include <Arduino.h>

Class Sensor_YL69{
    private:
        int sensorPin; // se defno el pin que voy a usar para la entrada del sensor

    public: 
    // construtor recibe el numero de pin
    Sensor_YL69(int pin_yl69);
    
    // metodo de inicializacion
    void begin();

    // lectura de la humedad de suelo
    float leerHumedad()

}

#endif
