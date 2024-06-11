#include "Dispenser.h"

Dispenser::Dispenser(WeightSensor* weightSensor, WaterPump* waterPump, Led* led){
  this->weightSensor = weightSensor;
  this->waterPump = waterPump;
  this->led = led;
}

Dispenser::~Dispenser(){
  delete weightSensor;
  delete waterPump;
  delete led;
}

float Dispenser::senseWeightOnTheTray(int x = 1){
  return weightSensor->senseWeightInGrams(x);
}

void Dispenser::turnOnWaterPump(){
  waterPump->turnOn();
}


void Dispenser::turnOffWaterPump(){
  waterPump->turnOff();
}

const char* Dispenser::getWaterPumpState(){
  return waterPump->getState();
}

void Dispenser::turnOnLed(){
  led->turnOn();
}


void Dispenser::turnOffLed(){
  led->turnOff();
}
