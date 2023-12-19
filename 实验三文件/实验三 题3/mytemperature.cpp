#include<iostream>
using namespace std;
double celsius_to_fah(double cel)    //摄氏温度到华氏温度
{
	return (cel * 9.0 / 5.0) + 32.0;
}
double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
{
	return (fah - 32.0) * 5.0 / 9.0;
}