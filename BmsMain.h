#ifndef BMSMAIN
#define BMSMAIN

#include <iostream>
#include "BmsSensor.h"
#include "BmsDataProcessor.h"
#include "BmsResult.h"

void processBmsParametersFromSensorToConsole(BmsParameters (*getBmsSensorReadings)(), void (*sendDataToConsole)(std::string));

#endif