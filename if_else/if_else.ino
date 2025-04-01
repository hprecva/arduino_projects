void setup() {
  pinMode(2, INPUT_PULLUP); // Declaración de pin como señal de entrada.
  pinMode(13, OUTPUT);      // Declaración de pin como salida.
}

void loop() {
  int state = digitalRead(2); // Se declara una variable para almacenar valor de entrada.
  if(state == 0) {            // Inicio de condicional, se incluye operación lógica.
    digitalWrite(13, HIGH);   // Acción a realizar una vez que se cumple con la operación lógica.
  } else {                    // Línea declaración para acción cuando no se cumple la operación lógica
    digitalWrite(13, LOW);    // Acción a realizar cuando no se cumple con la operación lógica.
  }
}
