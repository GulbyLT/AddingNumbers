#include <iostream>
#include "io.h"

int readNumber()
{
	int number;
	std::cin >> number;
	return number;
};

void writeAnswer(int answer)
{
	std::cout << "The two integers combined are: " << answer << "\n";
}