// Programando en ARDUINO C++ parte 1
//@author Héctor Preciado Valle
// 19 Marzo 2025

void setup() {
  pinMode(A0, INPUT); // Inicializa pin A0 como entrada
  pinMode(2, INPUT_PULLUP); // Inicializa pin 2 como pullup resistor
  pinMode(13, OUTPUT); // Inicializa pin 13 como salida
  Serial.begin(96000); // Prepara el puerto a trabajar

}

void loop() {
  digitalWrtie(13, HIGH); // Enciende el LED en el pin 13
  int val = analogRead(A0); // Lee la entrada del pin analógico A0
  int boton = digitalRead(2); // Lee la entrada del resistor en el pin 2
  Serial.print(val); // Muestra en terminal el valor del pin A0
  Serial.print(",");
  Serial.print(boton); // Muestra en terminal el valor del pin 2
  delay(200); //Espera 2 milisegundos
  digitalWrite(13, LOW); // Apaga LED
  delay(200);
  digitalWrite(13, LOW); 

}
