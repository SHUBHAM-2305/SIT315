int motionSensor = 2;  // Motion sensor connected to pin 2
int builtInLed = 13;   // Built-in LED on pin 13
int externalLed = 7;   // External LED connected to pin 7

void setup() {
    pinMode(motionSensor, INPUT);
    pinMode(builtInLed, OUTPUT);
    pinMode(externalLed, OUTPUT);
    Serial.begin(9600); // Initialize Serial Monitor
}

void loop() {
    int motionDetected = digitalRead(motionSensor); // Read motion sensor state
    Serial.print("Motion Sensor State: ");
    Serial.println(motionDetected);

    if (motionDetected == HIGH) {
        digitalWrite(builtInLed, HIGH);  // Turn Built-in LED ON
        digitalWrite(externalLed, HIGH); // Turn External LED ON
        Serial.println("Motion Detected! LEDs ON");
    } else {
        digitalWrite(builtInLed, LOW);   // Turn Built-in LED OFF
        digitalWrite(externalLed, LOW);  // Turn External LED OFF
        Serial.println("No Motion. LEDs OFF");
    }

    delay(500); // Wait before checking again
}
