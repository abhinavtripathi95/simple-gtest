#include <iostream>
#include "io.hpp"

int main(){
	int x = read_number();
	int y = read_number();
	int z = sum(x,y);
	write_number(z);
	return 0;
}
