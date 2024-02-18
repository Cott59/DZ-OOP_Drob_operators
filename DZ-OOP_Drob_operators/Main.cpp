#include"fraction.h"
#include<iostream>
#include<string>




int main()
{
	
	Fraction fr("33.5/54.7");

	std::cout << fr.Get_Numerator() << std::endl;
	std::cout << fr.Get_Denominator() << std::endl;




	return 0;
}
