#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void GetDataFromSender(int* temperatureReadings,int*stateOfChargeReadings)
{
   for(int range = 0; range < 50; range++)
  {
    scanf("%d, %d\n",&temperatureReadings[range], &stateOfChargeReadings[range]);
  } 
}

void GetMaxMinValue(int* maxValue, int* minValue, int *sensorData )
{
    
    *maxValue=*minValue=sensorData[0];
    
    for(int range = 0; range < 50; range++)
    {
         if(*minValue > sensorData[range])
         {
            *minValue =  sensorData[range];
         }
		 *minValue=sensorData[range];
		 if(*maxValue < sensorData[range])
         {
            *maxValue =  sensorData[range];
         }
		  *maxValue=sensorData[range]; 
		         
    }
}

void ComputeMovingAverage(int* sensorData, int*average)
{
    *average = 0;
    int sum = 0;
    for(int range = 45; range < 50 ; range++)
    {
        sum += sensorData[range];
    }
    *average  = sum/5;
}

void PrintOnConsole(int temperatureMaxValue,int temperatureMinValue, 
    int stateOfChargeMaxValue,int stateOfChargeMinValue ,
    int temperatureMovingaverage ,
int stateOfChargeMovingaverage)
{
    printf("Temp Sensor MaxValue:%d,Temp Sensor MinValue:%d,Temp Sensor Moving Average:%d\n SOC MaxValue:%d,SOC MinValue:%d,SOC Moving Average:%d\n", temperatureMaxValue, temperatureMinValue,temperatureMovingaverage,stateOfChargeMaxValue,stateOfChargeMinValue,stateOfChargeMovingaverage);
}

void ReceiveSensorData()
{
    
int temperatureReadings[50];
int stateOfChargeReadings[50];
int temperatureMaxValue ;
int temperatureMinValue;
int stateOfChargeMaxValue ;
int stateOfChargeMinValue;
int temperatureMovingaverage;
int stateOfChargeMovingaverage;
    
    GetDataFromSender(&temperatureReadings[0],&stateOfChargeReadings[0]);
    
    GetMaxMinValue(&temperatureMaxValue,&temperatureMinValue,&temperatureReadings[0]);
    GetMaxMinValue(&stateOfChargeMaxValue,&stateOfChargeMinValue,&stateOfChargeReadings[0]);
    
    ComputeMovingAverage(&temperatureReadings[0],&temperatureMovingaverage);
    ComputeMovingAverage(&temperatureReadings[0],&stateOfChargeMovingaverage);
    
    PrintOnConsole(int temperatureMaxValue,int temperatureMinValue, 
    int stateOfChargeMaxValue,int stateOfChargeMinValue ,
    int temperatureMovingaverage ,
int stateOfChargeMovingaverage);

    
}
