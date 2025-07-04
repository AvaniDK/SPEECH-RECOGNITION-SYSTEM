# SPEECH-RECOGNITION-SYSTEM

*COMPANY* : CODTECH IT SOLUTION

*NAME* : AVANI D K

*INTERN ID* : CT04DG131

*DOMAIN* : EMBEDDED SYSYTEMS

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH

# TASK DESCRIPTION
# Speech Recognition-Based Command Control System Using Embedded Board

## Objective

This project aims to design a basic speech recognition system that can be used to control electronic devices through command-based input. While real speech recognition modules require microphones and specialized hardware or software for processing, this project focuses on simulating the logic of such a system using serial communication. The system is developed using an embedded board (Arduino Uno) and is simulated on Tinkercad. In the absence of speech modules in Tinkercad, the Serial Monitor is used to emulate speech commands via typed inputs.


## Simulation Context

Tinkercad Circuits does not support actual voice input modules or microphones. To overcome this limitation, the Serial Monitor is used to manually input predefined commands that simulate recognized speech. These text commands serve as triggers to control devices (represented by LEDs) connected to the Arduino. While this is not actual voice processing, it effectively demonstrates the command-based control logic and embedded system response typically used in speech recognition projects.


## Theoretical Background

### Speech Recognition Concept

Speech recognition involves converting spoken language into text using hardware and software. Advanced systems use digital signal processing and machine learning models to detect keywords or phrases. In embedded systems, modules like the Elechouse Voice Recognition Module or voice assistant integrations (e.g., Google Assistant with IoT) are used to capture and process audio input.

This project simplifies the concept by assuming the voice command has already been converted into text, and directly uses that text to control devices. For example, if the spoken command is "Turn on light," the recognized keyword "LIGHT_ON" can be used to activate a device.

### Embedded System Control

An embedded microcontroller like Arduino receives serial input, processes commands using conditional logic, and sends output signals to control connected components. In our project, these components are LEDs representing physical devices such as lights, fans, or alarms.


## System Overview

The simulated system consists of:

- An Arduino Uno board
- LEDs acting as output devices
- Serial Monitor as the speech input emulator

The system reads typed text commands from the Serial Monitor and toggles devices accordingly. Commands like "LIGHT_ON", "LIGHT_OFF", "FAN_ON", and "FAN_OFF" are used to represent simplified voice command outputs.


## Logical Flow

1. Initialize serial communication and configure I/O pins.
2. Continuously read input from the Serial Monitor.
3. Compare the received input string with predefined command keywords.
4. If a match is found, perform the corresponding action by setting digital pins HIGH or LOW.
5. Print feedback to the Serial Monitor indicating the action taken.

In a physical system, voice recognition software or modules would handle converting actual spoken words into these command strings.


## Functional Description

This simulation focuses on demonstrating how an embedded system interprets and acts upon recognized speech commands. Though the speech-to-text conversion is not implemented here, the use of the Serial Monitor effectively mimics the reception of a processed voice command.

Example command mappings:

- "LIGHT_ON" → Turns on the light (LED on pin 2)
- "LIGHT_OFF" → Turns off the light
- "FAN_ON" → Turns on the fan (LED on pin 3)
- "FAN_OFF" → Turns off the fan

Each command corresponds to a specific control signal sent to the device.


## Educational Outcomes

Through this project, users gain experience in:

- Simulating voice-based control using serial interfaces
- Writing conditional logic for input interpretation
- Designing embedded systems for smart device control
- Understanding the interface between software commands and hardware actions
- Exploring ways to overcome hardware limitations in simulation environments


## Limitations and Considerations

- This is a simulation of command-based control, not real speech recognition.
- Actual implementation would require integration of a speech recognition module or software platform.
- The system currently handles only basic ON/OFF commands but can be extended to support more complex interactions.


## Future Enhancements

- Use a voice recognition module (like Elechouse V3) for real-time speech input.
- Integrate with a smartphone app that converts voice to text and sends it via Bluetooth.
- Add support for multiple devices and complex command handling.
- Use IoT platforms to enable remote voice-based control through cloud services.
  

## Conclusion

This project demonstrates a conceptual approach to building a speech recognition-based control system using an embedded board. Though actual speech input is not used due to simulation constraints, the Serial Monitor provides an effective stand-in for testing command-based logic. The project is suitable for beginners learning about embedded systems, serial communication, and human-machine interaction models.

# OUTPUT
