#define TIME 2000                                          // Definición de tiempo para realizar las acciones

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT_PULLUP);

}

void loop() {
  cambioColor(0);                             // Se manda valor a función externa 
  delay(TIME);                                // Tiempo de dos segundos de espera 
  cambioColor(1);                            
  delay(200);
  allOff();                                   // Se apagan todos los LED
  delay(200);                                 // Se espera dos milisegundos para proceder
  cambioColor(1);
  delay(200);
  allOff();
  delay(200);
  cambioColor(1);
  delay(200);
  allOff();
  cambioColor(2);
  delay(TIME);

}

void cambioColor(int val) {                  // Función a trabaja con switch-case para el semaforo
  switch (val) {
    case 0:
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      break;
    case 1:
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      break;
    case 2:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      break;
  }
}
