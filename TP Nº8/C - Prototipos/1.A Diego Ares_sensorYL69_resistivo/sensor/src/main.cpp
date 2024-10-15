#include <Arduino.h>
#include "sensor_humedad.h"  // Incluimos el archivo de cabecera


int valor; 
int parametro_humedad = 600;

void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);  // Configura el pin digital 10 como entrada

  // Intento de limpiar la pantalla en algunos entornos de terminal
  Serial.write(12); 
}

void loop() {
  valor = analogRead(A0);  // Leer el valor del sensor de humedad en el pin A0

  // Imprimir el valor leído por el sensor
  Serial.print("Valor del sensor: ");
  Serial.println(valor);

  // Evaluar si la humedad está por encima del parámetro configurado
  if (valor > parametro_humedad) {
    Serial.println("Valvula cerrada");
  } else {
    Serial.println("Valvula abierta");
  }

  delay(1000);  // Esperar 1 segundo

  // Intento de limpiar la pantalla en algunos entornos de terminal
  Serial.write(12); 
}
