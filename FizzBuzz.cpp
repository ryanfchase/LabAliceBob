#include <iostream>
 
int main(int argc, char *argv[]) {
	for(unsigned int i = 0; i < 100; i++) {
<<<<<<< HEAD
		if( i % 3 == 0)
			std::cout << i << ": " << "Fizz" << std::endl;
=======
		if( i % 5 == 0)
			std::cout << i << ": " << "Buzz" << std::endl;
>>>>>>> 85f61dc77c949d481092ea65ad1588aa892adf23
	}
	
	return(0);
}