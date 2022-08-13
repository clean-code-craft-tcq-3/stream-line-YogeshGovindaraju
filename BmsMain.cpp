#include "BmsMain.h"
#include "TestBmsDataProcessor.h"

void processBmsParametersFromSensorToConsole(BmsParameters (*getBmsSensorReadings)(), void (*sendDataToConsole)(std::string))
{
    BmsParameters bmsParameters = (*getBmsSensorReadings)();
    std::string readings = processBmsData(bmsParameters);
    (*sendDataToConsole)(readings);
}

int main()
{
    processBmsParametersFromSensorToConsole(&getBmsSensorReadings, &sendDataToConsole);
    testBmsData();
    return 0;
}