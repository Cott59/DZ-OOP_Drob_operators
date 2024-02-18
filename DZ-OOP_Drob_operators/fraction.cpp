#include"fraction.h"
#include<iostream>

auto Fraction::Return_Numerator(std::string str) {
	auto i = 0.0;
	std::string tmp;
	i = str.find("/");
	tmp.insert(0, str, 0, i);
	i = atoi(tmp.c_str());

	return i;
}

auto Fraction::Return_Denominator(std::string str) {
	int i = 0;
	std::string tmp;
	i = str.find("/");
	tmp.assign(str, i + 1, str.size());
	i = atoi(tmp.c_str());
	return i;
}

//bool Fraction::Check_Positiv_Fraction(std::string str) {
//	char temp[5];
//	std::string tmp;
//	tmp.insert(0, str, 0, 0);
//	/*temp[0] = const_cast<char> (tmp.c_str());*/
//
//}

Fraction::Fraction(std::string str)
{
	/*if (Check_Positiv_Fraction(str) == 0)
		Positiv_ = false;*/
	
	Numerator_ = Return_Numerator(str);
	Denominator_ = Return_Denominator(str);

}


void Fraction::Show_Fraction()
{
	if (Positiv_)
		std::cout << Numerator_ << "/" << Denominator_ << std::endl;
	else
		std::cout << "-" << Numerator_ << "/" << Denominator_ << std::endl;

}



Fraction operator+(Fraction obj1, Fraction obj2)
{
	Fraction temp;


	return temp;
}
