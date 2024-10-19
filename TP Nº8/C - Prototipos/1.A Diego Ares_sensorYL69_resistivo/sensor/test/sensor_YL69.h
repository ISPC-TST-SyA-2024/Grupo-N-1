#ifndef SENSOR_HUMEDAD_H
#define SENSOR_HUMEDAD_H

#include <Arduino.h>

// Declaración de variables
extern const int sensorPin;   // Pin del sensor
extern int sensorValue;       // Valor de lectura del sensor

// Declaración de funciones
void inicializarSensor();
int leerHumedad();

#endif
