#include <Arduino.h>
#include <Wire.h>
#include "SensorDHT22.h"
#include "BMP280Sensor.h"
#include "LCDDisplay.h"


// --------------------- Configuración de Pines ---------------------

SensorDHT22 sensorDHT22(14);  // Pin donde se conecta el DHT22

// --------------------- Inicialización de Sensores y Periféricos ---------------------

BMP280Sensor bmp280;
LCDDisplay lcd;

// --------------------- Configuración Inicial ---------------------
void setup() {
    Serial.begin(9600);
    while (!Serial);

    Wire.begin();
    sensorDHT22.begin();
    bmp280.begin();
    lcd.begin();
    lcd.displayMenu(); // Mostrar el encabezado en pantalla
}

// --------------------- Bucle Principal ---------------------
void loop() {
    float temperature = sensorDHT22.readTemperature();
    float humidity = sensorDHT22.readHumidity();
    // Lectura de Sensores
    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Error al leer los datos del sensor DHT22");
        }
    else {
            Serial.print("Humedad: ");
            Serial.print(humidity);
            Serial.print(" %, Temperatura: ");
            Serial.print(temperature);
            Serial.println(" °C");
        }
    float bmpTemp, bmpPressure;
    bmp280.readData(bmpTemp, bmpPressure);
    
    Serial.print("Presion: ");
    Serial.println(bmpPressure);
    Serial.println("---.---.---.---");

    // mostrar en el LCD
    lcd.updateInfo(humidity, temperature, bmpPressure);
    delay(1000); // Esperar 1 segundo antes de la siguiente lectura
}
