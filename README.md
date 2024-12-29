# Arduino Theremin

## Overview

The **Arduino Theremin** is an electronic musical instrument inspired by the classic theremin. It allows users to generate sound by varying pitch and volume through hand gestures. This project uses Arduino, ultrasonic sensors, and a buzzer to simulate the unique, touch-free sound interaction of a theremin.

## Features

- Pitch Control: Adjust the pitch of the sound by varying the distance of your hand from the pitch sensor.
- Volume Control: Modify the volume with a separate distance-based control system.
- Compact Design: Built with minimal hardware for ease of assembly and portability.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensors (e.g., HC-SR04)
- Buzzer or speaker
- Connecting wires
- Breadboard (optional)

## Software Requirements

- Arduino IDE
- Libraries:
  - [NewPing](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home)
  - [NewTone](https://bitbucket.org/teckel12/arduino-new-tone/wiki/Home)

## Setup

1. Connect the pitch and volume ultrasonic sensors to the Arduino as defined in `definitions.h`.
2. Attach the buzzer to pin 9 (BUZZER_PIN).
3. Upload the `theremin.ino` code to your Arduino board using the Arduino IDE.

## Usage

1. Power up the Arduino.
2. Place your hand near the pitch sensor to control the sound's pitch.
3. Move your hand near the volume sensor to adjust the volume.
4. Experiment with different gestures to create unique sounds.

## Acknowledgments

This project was developed collaboratively by @ZenthVale and @SalticHash. Special thanks to [SalticHash](https://github.com/SalticHash) for their contributions and collaboration.

## License

This project is open-source and distributed under the MIT License.
