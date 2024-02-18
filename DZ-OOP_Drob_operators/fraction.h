#pragma once
#include<iostream>


class Fraction
{
private:
	long long int Numerator_=0;
	long long int Denominator_=0;
	bool Positiv_ = true;
	auto Return_Numerator(std::string str);
	auto Return_Denominator(std::string str);
	/*bool Check_Positiv_Fraction(std::string str);*/
public:
	Fraction() {};
	Fraction(std::string str);
	

	void Set_Numerator(long long int num) { Numerator_ = num; };
	void Set_Denominator(long long int num) { Denominator_ = num; };
	long long int Get_Numerator() { return Numerator_; };
	long long int Get_Denominator() { return Denominator_; };

	void Show_Fraction();

	



	friend Fraction operator +(Fraction obj1, Fraction obj2);

};

Fraction operator +(Fraction obj1, Fraction obj2);
