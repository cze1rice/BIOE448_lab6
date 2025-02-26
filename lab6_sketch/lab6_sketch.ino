const int sensor_pin = 0;
int pulse_signal = 0;
float BPM = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);
}
