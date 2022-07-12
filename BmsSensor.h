#ifndef BMSSENSOR
#define BMSSENSOR

#include <stdlib.h>
#include <time.h>
#include <vector>

#define MINIMUM_TEMPERATURE 0
#define MAXIMUM_TEMPERATURE 45
#define MINIMUM_STATEOFCHARGE 20
#define MAXIMUM_STATEOFCHARGE 80
#define NUMBEROFREADINGS 50

struct BmsParameters
{
    std::vector<int> temperatureReadings;
    std::vector<int> stateOfChargeReadings;
};

std::vector<int> generateRandomValues(int minimumValue, int maximumValue, int numberOfValues)
{
    int value;
    std::vector<int> values;
    srand(time(NULL));
    for(int i=0; i<numberOfValues; i++)
    {
        value = rand()%(maximumValue - minimumValue + 1) + minimumValue;
        values.push_back(value);
    }
    return values;
}

BmsParameters getBmsSensorReadings()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = generateRandomValues(MINIMUM_TEMPERATURE, MAXIMUM_TEMPERATURE, NUMBEROFREADINGS);
    bmsParameters.stateOfChargeReadings = generateRandomValues(MINIMUM_STATEOFCHARGE, MAXIMUM_STATEOFCHARGE, NUMBEROFREADINGS);
    return bmsParameters;
}

#endif