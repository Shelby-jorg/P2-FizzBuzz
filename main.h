/*
Created by: Shelby Jorgensen
Project 2: FizzBuzz
Created for CSCI 151
*/

#include <string>
#include <iostream>

int main() {
	//Create an array of ints and add the values 1-100 to it
	int numbers[100];
	for (int i = 1; i <= 100; i++) {
		numbers[i - 1] = i;
	}

	//Read through the array, printing different values based off whether the int meets a condition
	for (int i = 1; i <= 100; i++) {
		if ((numbers[i - 1] % 3 == 0) && (numbers[i - 1] % 5 == 0)) {
			std::cout << "FizzBuzz \n";
		}
		else if (numbers[i - 1] % 3 == 0) {
			std::cout << "Fizz \n";
		}
		else if (numbers[i - 1] % 5 == 0) {
			std::cout << "Buzz \n";
		}
		else {
			std::cout << numbers[i - 1] << "\n";
		}
	}

}