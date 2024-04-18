#include <iostream>
#include "io.h"

int main()
{
	std::cout << "Please input Integer 1: \n";
	int int1 = readNumber();
	std::cout << "Please input Integer 2: \n";
	int int2 = readNumber();
	int answer = int1 + int2;
	writeAnswer(answer);


	return 0;
}