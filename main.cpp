#include <Arduino.h>

const int sensorPin = 34;  // Photoresistor conectado a GPIO 34

// Orden lógico: azul, azul, azul, azul, azul (GPIO 25), rojo (GPIO 23)
const int ledPins[] = {18, 19, 21, 22, 23, 25};  // Asegúrate que 25 es el nuevo azul y 23 es el rojo
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  analogReadResolution(12);  // Rango de 0 a 4095
  Serial.println("Sistema listo. Escala de luz: 3000 (oscuro) -> 1500 (lleno).");
}

void loop() {
  int luz = analogRead(sensorPin);
  Serial.print("Luz detectada: ");
  Serial.println(luz);

  // Mapeamos el rango de luz a número de LEDs
  int ledsToShow = map(luz, 3000, 1500, 0, numLeds);
  ledsToShow = constrain(ledsToShow, 0, numLeds);

  for (int i = 0; i < numLeds; i++) {
    if (i < ledsToShow) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(200);
}
