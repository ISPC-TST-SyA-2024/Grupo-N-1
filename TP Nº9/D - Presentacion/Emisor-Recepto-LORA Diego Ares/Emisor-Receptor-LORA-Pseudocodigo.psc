Algoritmo EmisorReceptorLORA
    // Definici�n de variables
    Definir botonPresionado Como Logico;
    Definir ackRecibido Como Logico;      
    Definir mensaje Como Caracter;       
    
    // Inicializar las variables
    botonPresionado <- FALSO;              // Asignaci�n de valor inicial
    ackRecibido <- FALSO;                  // Asignaci�n de valor inicial
    
    // Emisor
    Escribir "Iniciar Emisor";
    // Inicializar Pin Bot�n (INPUT) // Implementar esta funci�n
    // Inicializar Pin LED (OUTPUT)   // Implementar esta funci�n
    // Inicializar LoRa (433 MHz)      // Implementar esta funci�n
    // Configurar Interrupci�n en Bot�n // Implementar esta funci�n
    
    Mientras VERDADERO Hacer
        // Esperar Eventos del Bot�n   // Implementar esta funci�n
        // Aqu� se debe actualizar el estado de "botonPresionado" basado en la entrada del bot�n
        Si botonPresionado Entonces
            // Seleccionar Mensaje Aleatorio // Implementar esta funci�n
            // Enviar Mensaje LoRa          // Implementar esta funci�n
            // Esperar ACK (Timeout 2000ms) // Implementar esta funci�n
            Si ackRecibido Entonces
                // Encender LED              // Implementar esta funci�n
            FinSi
        FinSi
    FinMientras
    
    // Receptor
    Escribir "Iniciar Receptor";
    // Inicializar LoRa (433 MHz)        // Implementar esta funci�n
    // Configurar Interrupci�n DIO0       // Implementar esta funci�n
    
    Mientras VERDADERO Hacer
        Si Esperar_Mensaje_LoRa Entonces
            // Recibir Mensaje LoRa       // Implementar esta funci�n
            // Mostrar Mensaje en LCD     // Implementar esta funci�n
            // Enviar ACK LoRa            // Implementar esta funci�n
        FinSi
    FinMientras
FinAlgoritmo
