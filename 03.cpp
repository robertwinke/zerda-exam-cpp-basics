/*
 * 03.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */

#include <iostream>

using namespace std;

/*
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

void multiply(float* total, float number) {
  *total *= number;
}

int main() {
  float total = 123;
  float* pointer = &total;
  float number = 5;

  multiply(pointer, number);
  cout << total << endl;

  return 0;
}


