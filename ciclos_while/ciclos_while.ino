#define TIME 2000

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT_PULLUP);

}

void loop() {
  long lastMillis = millis();                   // Toma cuantos milisegundos han pasado desde que inicio
                                                // el Arduino a trabajar.
  cambioColor(0);
  delay(TIME);
  while (millis() - lastMillis < 4000) {       // Función While, tomando el valor de millis para entrar
                                                // al ciclo.
    cambioColor(1);
    delay(200);
    allOff();
    delay(200);
  }
  cambioColor(2);
  delay(TIME);

}

void cambioColor(int val) {
  switch (val) {                  // Casos de cambio 
    case 0:                              // Utilizando el valor de la variable con valor 0
      digitalWrite(2, HIGH);             // Acciones a realizar en el caso 0
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      break;                             // Termino de caso usado
    case 1:                              // Caso con valor de variable 1
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      break;
    case 2:                              // Caso con valor de variable 2
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      break;
  }
}
