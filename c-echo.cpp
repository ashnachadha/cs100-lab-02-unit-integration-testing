#include <iostream>

int main(int argv, char**  argc) {
	//Skip the first agc index because its the program
	for(int i = 1; i < argv; i++) {
		std::cout << argc[i] << " ";
	}
	std::cout << std::endl;
}
