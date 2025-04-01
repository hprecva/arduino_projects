int botonState = 0;                      // Declaración de variable de uso


void setup() {
  pinMode(2, OUTPUT);                    // Decalaración de pines para trabajo
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(8) == 0) {             // Condicional para determinar valor de uso para los casos
    botonState = (botonState + 1) % 3;
    delay(200);
  }
  switch (botonState) {                  // Casos de cambio 
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
