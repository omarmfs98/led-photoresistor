## 🇺🇸 English

### Light Sensor with LED Progress Bar (ESP32 + Photoresistor)

This project uses a **photoresistor (light sensor)** connected to an ESP32 to control a **visual progress bar made of 6 LEDs**. As light intensity increases, the LEDs turn on one by one from the first blue to the final red LED.

#### 🔧 Hardware Required

- 1x ESP32  
- 1x Photoresistor (LDR)  
- 6x LEDs (5 blue, 1 red)  
- 6x 220Ω resistors  
- Jumpers  
- Breadboard

#### ⚙️ Wiring

| Component       | ESP32 Pin |
|----------------|-----------|
| Photoresistor  | GPIO 34   |
| LED Blue 1     | GPIO 18   |
| LED Blue 2     | GPIO 19   |
| LED Blue 3     | GPIO 21   |
| LED Blue 4     | GPIO 22   |
| LED Red        | GPIO 23   |
| LED Blue Final | GPIO 25   |

> ⚠️ Connect the other end of the photoresistor to 3.3 V and use a voltage divider for better stability.

#### 💡 Logic

- The ESP32 reads analog light levels from 0 to 4095.
- It maps the range from **3000 (dark)** to **1500 (bright light)** to determine how many LEDs should light up.
- The brighter it gets, the more LEDs turn on.

#### 📸 Demo

![Demo](test.GIF)

---

## 🇪🇸 Español

### Sensor de Luz con Barra de Progreso LED (ESP32 + Fotoresistor)

Este proyecto utiliza un **fotoresistor (sensor de luz)** conectado a un ESP32 para controlar una **barra de progreso visual con 6 LEDs**. A medida que aumenta la luz, los LEDs se encienden progresivamente desde uno azul hasta el rojo.

#### 🔧 Hardware Necesario

- 1x ESP32  
- 1x Fotoresistor  
- 6x LEDs (5 azules, 1 rojo)  
- 6x Resistencias de 220Ω  
- Jumpers  
- Protoboard

#### ⚙️ Esquema de Conexión

| Componente      | Pin ESP32 |
|-----------------|-----------|
| Fotoresistor    | GPIO 34   |
| LED Azul 1      | GPIO 18   |
| LED Azul 2      | GPIO 19   |
| LED Azul 3      | GPIO 21   |
| LED Azul 4      | GPIO 22   |
| LED Rojo        | GPIO 23   |
| LED Azul final  | GPIO 25   |

> ⚠️ Conecta el otro extremo del fotoresistor a 3.3 V y usa un divisor resistivo para mayor estabilidad.

#### 💡 Lógica de Funcionamiento

- El ESP32 lee valores analógicos entre 0 y 4095.
- Se mapea el rango de **3000 (oscuro)** a **1500 (luz fuerte)** para decidir cuántos LEDs encender.
- A mayor luz, más LEDs se encienden.

#### 📸 Vista previa

![Demo del proyecto](test.GIF)

---

Desarrollado por Omar Florez — [cv.omarflorez.me](https://cv.omarflorez.me) ⚡️🤖
