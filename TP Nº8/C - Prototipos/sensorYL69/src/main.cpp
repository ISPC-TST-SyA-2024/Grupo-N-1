#include <Arduino.h>
#include "sensor_humedad.h"  // Incluir el archivo de encabezado del sensor

// Definir el pin analógico donde está conectado el sensor YL-69
#define PIN_SENSOR_HUMEDAD 34

// Crear una instancia del sensor
Sensor_YL69 sensorHumedad(PIN_SENSOR_HUMEDAD);

void setup() {
    // Iniciar la comunicación serie para monitorear los valores en el monitor serie
    Serial.begin(115200);

    // Inicializar el sensor
    sensorHumedad.begin();
}

void loop() {
    // Leer la humedad del suelo
    float humedad = sensorHumedad.leerHumedad();

    // Mostrar el valor de humedad en el monitor serie
    Serial.print("Humedad del suelo: ");
    Serial.print(humedad);
    Serial.println("%");

    // Esperar 2 segundos antes de la siguiente lectura
    delay(2000);
}
