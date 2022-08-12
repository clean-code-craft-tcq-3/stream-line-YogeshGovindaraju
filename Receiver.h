#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintOutput(int temperatureMaxValue,int temperatureMinValue, int stateOfChargeMaxValue,int stateOfChargeMinValue ,int temperatureMovingaverage ,int stateOfChargeMovingaverage);
void GetDataFromSender(int* temperatureReadings,int*stateOfChargeReadings);
void GetMaxValue(int* maxValue, int *sensorData );
void GetMinValue( int* minValue, int *sensorData );
void ComputeMovingAverage(int* sensorData, int*average);
bool ReceiveSensorData();
