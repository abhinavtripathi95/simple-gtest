#include <iostream>
#include "io.hpp"

int main(){
	int x = read_number();
	int y = read_number();
	int z = x + y;
	write_number(z);
	return 0;
}
