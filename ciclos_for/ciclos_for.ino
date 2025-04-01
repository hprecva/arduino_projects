// Declaración de librerias
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Decalración de variables a usar
const int num = 10;
int posX[num];
int posY[num];

SSD1306 display(4);

void setup() {
  randomSeed(A0); // Declaración de pin que servirá como valor random.
  display.begin(SSD1306_SWITCHCAPVCC, 0x3c); // Inicia el OLED
  display.clearDisplay();                    // Limpia buffer
  for ( int i = 0; i < num; i++) {           // Inicio de ciclo de arreglos.
    posX[i] = 64;
    posY[i] = 32;
  }

}

void loop() {
  display.clearDisplay();                                     // Limpieza de buffer.
  for( int i = 0; i < num; i++) {                             // Ciclo de función principal
    posX[i] = constrain(posX[i] + random(-3, 3), 1, 127);     // Acción a realizar en ciclo.
    posY[i] = constrain(posY[i] + random(-3, 3), 1, 63);      // Segunda acción a realizar en ciclo.
    display.fillCircle(posX[i], posY[i], 1, WHITE);           // Muestra en el Led un circulo en posición aleatoria
    display.display();                                        // Muestra 
  }
  delay(100);
}
