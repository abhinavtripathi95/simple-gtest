#include <iostream>
#include "io.hpp"

int read_number(){
	std::cout << "Enter an integer: " << std::endl;
	int x;	
	std::cin >> x;
	return x;
}

void write_number(int x){
	std::cout  << x << std::endl;
	return;
}

int sum(int a, int b){
	int s = a+b;
	return s;
}
