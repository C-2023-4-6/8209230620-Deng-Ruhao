#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

int main(){
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	for (int i = 0; i < 10; i++) {
		cout << cel << '\t' << celsius_to_fah(cel) <<'\t' << "|" << fah << '\t' <<fixed<<setprecision(2)<< fahrenheit_to_cels(fah) << endl;
		cel--;
		fah -= 10;
	}	
	
}