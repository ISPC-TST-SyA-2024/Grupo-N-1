#include "sensor_humedad.h"

// Definición de las variables
const int sensorPin = 34;  // Pin donde está conectado el sensor YL-69
int sensorValue = 0;       // Variable para almacenar el valor de lectura del sensor

// Implementación de la función para inicializar el sensor
void inicializarSensor() {
    Serial.begin(115200);  // Inicializa el puerto serial para la salida de datos
    pinMode(sensorPin, INPUT);  // Configura el pin del sensor como entrada
}

// Implementación de la función para leer el valor de humedad
int leerHumedad() {
    // Leer el valor analógico del sensor
    sensorValue = analogRead(sensorPin);
    
    // Convertir el valor leído a porcentaje de humedad (0-100%)
    int humedad = map(sensorValue, 0, 4095, 0, 100);
    return humedad;
}
