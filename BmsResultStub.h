#ifndef BMSRESULTSTUB
#define BMSRESULTSTUB

std::string resultStub;

void sendDataToConsoleStub(std::string data)
{
    resultStub.clear();
    resultStub = data;
}

#endif