// Programando en ARDUINO C++ parte 1
//@author Héctor Preciado Valle
// 19 Marzo 2025

void setup() {
  Serial.begin(9600); // Inicia el puerto de trabajo
}

void loop() {
  int miVariable = analogRead(A0); // Almacena el valor del pin analógico A0 en una variable
  Serial.println(miVariable); // Gráfica el valor de la variable

}
