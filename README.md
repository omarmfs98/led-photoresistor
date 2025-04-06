# Sensor de Luz con LED Progress Bar (ESP32 + Fotoresistor)

Este proyecto utiliza un **fotoresistor (sensor de luz)** conectado a un ESP32 para controlar una **barra de progreso visual hecha con 6 LEDs**. A medida que aumenta la cantidad de luz, se encienden progresivamente los LEDs desde uno azul hasta el último rojo.

## 🔧 Hardware Necesario

- 1x ESP32
- 1x Fotoresistor (sensor de luz)
- 6x LEDs (5 azules, 1 rojo)
- 6x Resistencias de 220Ω
- Jumpers
- Protoboard

## ⚙️ Esquema de Conexión

| Componente      | Pin ESP32  |
|-----------------|------------|
| Fotoresistor    | GPIO 34 (S)|
| LED Azul 1      | GPIO 18    |
| LED Azul 2      | GPIO 19    |
| LED Azul 3      | GPIO 21    |
| LED Azul 4      | GPIO 22    |
| LED Rojo        | GPIO 23    |
| LED Azul final  | GPIO 25    |

> ⚠️ Conecta el otro extremo del fotoresistor a 3.3 V y usa un divisor resistivo si es necesario para estabilidad.

## 💡 Lógica de Funcionamiento

- El ESP32 lee valores analógicos de luz en un rango de 0 a 4095.
- Se mapea el rango de **3000 (oscuridad)** a **1500 (luz intensa)** para determinar cuántos LEDs se deben encender.
- A mayor luz, mayor cantidad de LEDs encendidos.

## 🧪 Resultado Esperado

- En un ambiente oscuro, los LEDs estarán apagados.
- Cuando se incrementa la luz sobre el sensor, los LEDs se encenderán progresivamente de izquierda a derecha.
- El LED rojo representa el estado final con máxima luz.

## 📸 Vista previa

![Demo del proyecto](test.gif)

## 🧠 Créditos

Desarrollado por Omar Florez - cv.omarflorez.me ⚡️🤖
