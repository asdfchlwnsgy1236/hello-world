// Reviewing how to write C++ again.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int main(void){
	std::cout << "Hello, world!" << std::endl;
	std::cout << "Press Enter to continue.";
	std::cin.ignore();

	return 0;
}
