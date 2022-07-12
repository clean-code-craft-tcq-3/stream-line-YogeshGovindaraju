#ifndef TESTBMSDATAPROCESSOR
#define TESTBMSDATAPROCESSOR

#include <assert.h>
#include "BmsSensorStub.h"
#include "BmsResultStub.h"

void testForEmptyReadings()
{
    std::string expectedOutput = "\nReadings are not available!!!";
    processBmsParametersFromSensorToConsole(&getBmsSensorReadingsStub1, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testForDifferentNumberOfReadings()
{
    std::string expectedOutput = "\nTemperatureReadings,StateOfChargeReadings\n10,50\n-5,64\n44,15\n56,89\n6,3\n83,99";
    processBmsParametersFromSensorToConsole(&getBmsSensorReadingsStub2, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testForEqualNumberOfReadings()
{
    std::string expectedOutput = "\nTemperatureReadings,StateOfChargeReadings\n45,74\n0,26\n-1,20\n46,80\n25,10\n59,97\n16,37\n7,2";
    processBmsParametersFromSensorToConsole(&getBmsSensorReadingsStub3, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testBmsData()
{
    testForEmptyReadings();
    testForDifferentNumberOfReadings();
    testForEqualNumberOfReadings();
}

#endif