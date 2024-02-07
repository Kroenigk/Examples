/**
 *        @file: testGround.cpp
 *      @author: Kylie Roenigk
 *        @date: February 07, 2024
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

///class exercise ***Probably will be on the test
  short x = 32767;
  short y = -32768;

  x = x + 1;
  cout << x << endl;

  y = y - 1;
  cout << y << endl; 
  ///by overflowing the data type beyond what it
  /// can hold it goes to the other end of its range to hold the data
  
   return 0;
}// main