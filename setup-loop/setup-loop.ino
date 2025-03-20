// Programando en ARDUINO C++ parte 1
//@author Héctor Preciado Valle
// 19 Marzo 2025

// Esta sección solo funciona al inicio
void setup() {
  // Se inicia el pin 13
  pinMode(13, OUTPUT);

}

// Función principal que se repite cada determinado tiempo
void loop() {
  digitalWrite(13, HIGH); // Manda señal de encendido al pin 13
  delay(1000);            // Espera un segundo
  digitalWrite(13, LOW);  // Manda señal de apagado al pin 13
  delay(1000);            // Espera un segundo
}
