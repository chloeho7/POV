# POV display Creative Embedded Systems

## How to recreate

### Components
- TTGO T-display ESP32
- USB-C
- Machine that supports [Arduino IDE](https://www.arduino.cc/en/software)
- Battery
- Power Cable included with the TTGO T-display
- 8 LEDs and 8 compatbile resistors
- Perf Board
- Scrap Wood
- 8 Male to Female Wires
- Tape
- Solder

### IDE and libraries
1. [Download Arduino IDE](https://www.arduino.cc/en/software)
2. Launch the IDE and open the Settings/Preferences page: Ardunio --> Settings
3. Copy and paste, https://dl.espressif.com/dl/package_esp32_index.json, into Additional Boards Manager URLs

### Download Code and Upload to ESP32
1. Download `POV.ino` and open the file in the [Arduino IDE](https://www.arduino.cc/en/software)
2. Connect the TTGO T-display ESP32 and your computer using the USB-C
3. In the [Arduino IDE](https://www.arduino.cc/en/software) select Tools and the corresponding Port
4. Select Upload and enjoy the display

### Installation

#### Perf Board
1. Put all the LEDs in a line in the Perf board making sure all the negative and positive leads are on the same side.
2. Place the Resistors next to each of the positive sides of the LEDs (long lead)
3. Solder together all the negative leads
4. Solder a male end of the wire to the negative lead
5. For each LED solder the resistor and positive long lead and the male end of a wire to the resistor

#### Connecting LEDS
6. Connect the LEDS to the following pins in the given order from outside to inside (Pin 21 > Outermost LED, Pin 27 > Innermost LED):
21,22,17,2,15,13,12,27

#### Fan 
7. Measure a piece of wood that is short enough to fit inside the fan and wide enough for the battery, perf board, and ESP32 to all fit
8. Add a hole in the middle of the wood big enough for the motor
9. Tape the Perf board, battery, and ESP32 to the board
10. Take the plastic fan off the motor and replace it with the wood
11. Connect the battery and TTGO
12. Turn on the Fan and enjoy!

### Connecting to ESP32 server
1. Connect to the ESP32 through USB-C
2. Turn on the serial monitor in the Arduino IDE for instructions





