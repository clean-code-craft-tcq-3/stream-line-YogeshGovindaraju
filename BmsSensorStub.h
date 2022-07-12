#ifndef BMSSENSORSTUB
#define BMSSENSORSTUB

BmsParameters getBmsSensorReadingsStub1()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {};
    bmsParameters.stateOfChargeReadings = {};
    return bmsParameters;
}

BmsParameters getBmsSensorReadingsStub2()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {10, -5, 44, 56, 6, 83};
    bmsParameters.stateOfChargeReadings = {50, 64, 15, 89, 3, 99, 65, 78, 38};
    return bmsParameters;
}

BmsParameters getBmsSensorReadingsStub3()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {45, 0, -1, 46, 25, 59, 16, 7};
    bmsParameters.stateOfChargeReadings = {74, 26, 20, 80, 10, 97, 37, 2};
    return bmsParameters;
}

#endif