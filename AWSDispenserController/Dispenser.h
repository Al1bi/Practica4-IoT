#ifndef DISPENSER_H
#define DISPENSER_H

#include "WaterPump.h"
#include "WeightSensor.h"
#include "Led.h"

class Dispenser {
private:  
  WeightSensor* weightSensor;
  WaterPump* waterPump;
  Led* led;

public:
  Dispenser(WeightSensor* weightSensor, WaterPump* waterPump, Led* led);
  ~Dispenser();
  float senseWeightOnTheTray(int);
  void turnOnWaterPump();
  void turnOffWaterPump();
  const char* getWaterPumpState();
  void turnOnLed();
  void turnOffLed();
};

#endif
 
