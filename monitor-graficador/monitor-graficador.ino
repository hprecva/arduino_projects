// Programando en ARDUINO C++ parte 1
//@author Héctor Preciado Valle
// 19 Marzo 2025

void setup() {
  Serial.begin(9600); // Inicia el puerto de trabajo
  pinMode(A0, INPUT); // Inicializa el pin analógico A0 como entrada

}

void loop() {
  Serial.println(analogRead(A0)); // Muestra en terminal el valor del pin A0 en forma de gráfico
}
