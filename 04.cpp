/*
 * 04.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int divisorCount(int number) {
  int answer = 0;

  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      answer += 1;
    }
  }
  return answer;
}

int main() {
  int number;
  cout << "Gimme a number to check" << endl;
  cin >> number;

  cout << "your number has this many divisors: " << divisorCount(number) << endl;

  return 0;
}


