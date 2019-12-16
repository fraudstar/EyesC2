/*
  Detect changes in optial nerves.
  by EyesC2 for SenSyT presentation
  
  TODO: This along with the entire project will be ported to Rust for improved security.
  
  Disclaimer: This is for demonstration purposes only. The majority of the intellectual property will remain protected on
  a private repository until closer to the release date.
*/

// Consistant variables are fixed:
const int nOpticalNervePinOne = A1; // Using the reverse engineered proprietary device this will be connected to nerve A1.

// Ordinary variables can log changes:
int nNerveOneData = 0; // Stores data related to nerve A1.

void setup() {
  Serial.begin(9600);
  Serial.println("Copyright 2019, this source code is for demonstration purposes only.");
}

void loop() {
  nNerveOneData = analogRead(nOpticalNervePinOne); // Recieves data from optical nerve A1
  Serial.println(val); // Output data for debug purposes, in the future this will be used for AI mathematical models
}

