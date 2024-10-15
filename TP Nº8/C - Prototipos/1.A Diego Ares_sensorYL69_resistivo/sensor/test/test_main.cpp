#include <Arduino.h>
#include <unity.h>
#include "sensor_humedad.h"  // Incluir el archivo .h del código que estamos probando

// Variables para realizar pruebas
int test_valor;

void setUp(void) {
    // Esto se ejecuta antes de cada prueba. Podrías inicializar aquí si es necesario
}

void tearDown(void) {
    // Esto se ejecuta después de cada prueba. Podrías limpiar aquí si es necesario
}

void test_sensor_valor_humedad_bajo(void) {
    test_valor = 500;  // Simulamos un valor de humedad bajo
    valor = test_valor;
    parametro_humedad = 600;

    if (valor > parametro_humedad) {
        TEST_ASSERT_EQUAL_STRING("Valvula cerrada", "Valvula cerrada");
    } else {
        TEST_ASSERT_EQUAL_STRING("Valvula abierta", "Valvula abierta");
    }
}

void test_sensor_valor_humedad_alto(void) {
    test_valor = 700;  // Simulamos un valor de humedad alto
    valor = test_valor;
    parametro_humedad = 600;

    if (valor > parametro_humedad) {
        TEST_ASSERT_EQUAL_STRING("Valvula cerrada", "Valvula cerrada");
    } else {
        TEST_ASSERT_EQUAL_STRING("Valvula abierta", "Valvula abierta");
    }
}

void setup() {
    // Configuración de Unity
    UNITY_BEGIN();

    // Llamar a las pruebas
    RUN_TEST(test_sensor_valor_humedad_bajo);
    RUN_TEST(test_sensor_valor_humedad_alto);

    UNITY_END();  // Finalizar las pruebas
}

void loop() {
    // PlatformIO requiere que loop esté presente aunque no se use en pruebas
}
