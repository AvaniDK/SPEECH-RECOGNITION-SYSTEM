String command;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);  // LED1
  pinMode(6, OUTPUT);  // LED2
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');

    if (command == "1on") {
      digitalWrite(5, HIGH);
      Serial.println("Device 1 ON");
    } else if (command == "1off") {
      digitalWrite(5, LOW);
      Serial.println("Device 1 OFF");
    } else if (command == "2on") {
      digitalWrite(6, HIGH);
      Serial.println("Device 2 ON");
    } else if (command == "2off") {
      digitalWrite(6, LOW);
      Serial.println("Device 2 OFF");
    }
  }
}
