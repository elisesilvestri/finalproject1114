#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S i2s1;   //xy=233,106
AudioOutputI2S i2s2;  //xy=504,88
AudioConnection patchCord1(i2s1, 0, i2s2, 1);
AudioConnection patchCord2(i2s1, 0, i2s2, 0);
AudioControlSGTL5000 sgtl5000_1;  //xy=342,214
// GUItool: end automatically generated code


void setup() {
  // put your setup code here, to run once:
  AudioMemory(12);  //always include this when using the Teensy Audio Library even if you don't know what it is yet!
  sgtl5000_1.enable();
  sgtl5000_1.inputSelect(AUDIO_INPUT_MIC);
  sgtl5000_1.volume(0.8);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
}
