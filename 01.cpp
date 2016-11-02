/*
 * 01.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool isThere(int array[], int length, int number) {
  for (int i = 0; i < length; i++){
    if (array[i] >= number) {
      return true;
    }
  }
  return false;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array)/sizeof(int);
  int number;
  cout << "Gimme a number to check" << endl;
  cin >> number;

  if (isThere(array, length, number)) {
    cout << "there is a bigger or equal number in the array than yours" << endl;
  }
  else {
    cout << "there isn't a bigger or equal number in the array than yours" << endl;
  }

  return 0;
}


