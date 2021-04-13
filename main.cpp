// -----------------------------------------------------------------------
// FizzBuzz example
// -----------------------------------------------------------------------
// By Alvaro "Krono" Gonzalez
// https://alvarogonzalezferrer.github.io/
// -----------------------------------------------------------------------
// More info:
//
// https://en.wikipedia.org/wiki/Fizz_buzz
//
// This code is extra commented for educative purposes
// 
// -----------------------------------------------------------------------
#include <iostream>

int main(int argc, char** argv) {
	int a,b;  // to speed up calculations below
	
	for (int i=1; i <= 100; i++)  // go from 1 to 100
	{
		// no need to do this calculation many times
		a = i % 3;
 		b = i % 5;
 		  
  	    if (a && b)  // is not a multiple of 3 or 5
  		    std::cout << i; 
   		
		if (!a)
		   std::cout << "Fizz";  // multiple of 3
		
		if (!b)
		   std::cout << "Buzz";  // multiple of 5
		   
		// note: if the number is multiple of both 3 and 5. you will see FizzBuzz on screen, as intended!
		   
		std::cout << "\t";  // tab
				  
	}
	
	std::cout << std::endl;
	
	return 0;
}