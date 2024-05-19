// Define the pins for the traffic light
const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;

void setup() {
    // Set the traffic light pins as outputs
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    // Turn on the red light
    digitalWrite(redPin, HIGH);
    delay(2000); // Wait for 2 seconds

    // Turn off the red light and turn on the yellow light
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(1000); // Wait for 1 second

    // Turn off the yellow light and turn on the green light
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(2000); // Wait for 2 seconds

    // Turn off the green light and turn on the yellow light
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(1000); // Wait for 1 second
}