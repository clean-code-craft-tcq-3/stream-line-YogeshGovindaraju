#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "Receiver.h"


// TEST_CASE("test case 1 : check min value functionality "){
//   int minValue = 0,
//   int sensorData[50] ={0};
  
//   sensorData[2] = -1;
//   sensorData[42] = -3;
//   GetMaxValue(&minValue,&sensorData);
  
//   REQUIRE(minValue == -3);
// }

TEST_CASE("call receiver"){
  ReceiveSensorData();
}
