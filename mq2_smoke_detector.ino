
int LED = 2;
const int gas = 0;
int MQ2pin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT); // Initialize LED pin as output
}

void loop() {
  float sensorValue;
  sensorValue = analogRead(MQ2pin); // Read analog input from MQ2 sensor

  if (sensorValue >= 470) {
    digitalWrite(LED, HIGH);
    Serial.print(sensorValue);
    Serial.println(" | SMOKE DETECTED");
  } else {
    digitalWrite(LED, LOW);
    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);
  }

  delay(1000); // Wait for 1 second
}

float getsensorValue(int pin) {
  return analogRead(pin);
}
