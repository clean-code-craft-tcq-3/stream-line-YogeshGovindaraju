#ifndef BMSDATAPROCESSOR
#define BMSDATAPROCESSOR

#include <algorithm>
#include <sstream>

std::string processBmsData(BmsParameters bmsParameters)
{
    std::stringstream readings;
    size_t numberOfReadings = std::min(bmsParameters.temperatureReadings.size(), bmsParameters.stateOfChargeReadings.size());
    if(numberOfReadings !=0)
    {
        readings << "\nTemperatureReadings,StateOfChargeReadings";
        for(size_t i=0; i<numberOfReadings; i++)
        {
            readings << "\n" << bmsParameters.temperatureReadings.at(i) << "," << bmsParameters.stateOfChargeReadings.at(i);
        }
    }
    else
    {
        readings << "\nReadings are not available!!!";
    }
    return readings.str();
}

#endif