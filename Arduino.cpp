// Automatic Street Light System
// By Clinton's Group

int LDR_Pin = A0;     // LDR connected to analog pin A0
int LED_Pin = 13;     // LED connected to digital pin 13
int LDR_Value = 0;    // Variable to store LDR reading
int threshold = 500;  // Adjust this value depending on lighting

void setup() {
  pinMode(LED_Pin, OUTPUT);
  Serial.begin(9600); // For monitoring LDR values
}

void loop() {
  LDR_Value = analogRead(LDR_Pin); // Read LDR value
  Serial.println(LDR_Value);       // Print for debugging

  if (LDR_Value < threshold) {
    digitalWrite(LED_Pin, HIGH);  // Turn ON light when dark
  } else {
    digitalWrite(LED_Pin, LOW);   // Turn OFF light when bright
  }

  delay(500);
}
