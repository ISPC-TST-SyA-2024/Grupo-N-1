#include <Arduino.h>
#include "sensor_humedad.h"

const int sensorPin = 34;  // Pin donde está conectado el sensor YL-69
int sensorValue = 0;       // Variable para almacenar el valor de lectura del sensor

void setup() {
    inicializarSensor();  // Inicializa el sensor
}

void loop() {
    // Leer el valor de humedad
    int humedad = leerHumedad();
    
    // Imprimir el valor de humedad en el monitor serial
    Serial.print("Humedad del suelo: ");
    Serial.print(humedad);
    Serial.println("%");
    
    delay(1000);  // Espera 1 segundo antes de la siguiente lectura
}
