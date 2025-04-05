//  Se declaran las variables a usar 

int buzzer = 7;
int sensor = 6;
bool estado = false;

void setup() {
  pinMode( buzzer, OUTPUT);         //Configuración de pin de salida
  pinMode( sensor, INPUT_PULLUP);   //Configuración de pin de entrada como Pullup
  digitalWrite( buzzer, LOW);       //Buzzer inicia apagado
  Serial.begin(9600);
}

void loop() {
  bool valor = digitalRead(sensor); //Leectura de valor del sensor de ruido.
  Serial.println(valor);            //Se imprime valor del sensor.
  if ( valor == true ) {            //Se usa la condicional con la lectura digital, si es 1
    estado =! estado;               //se enciende el buzzer o 0 se desactiva.
    digitalWrite(buzzer, estado);
    delay(1000);
  }
}
