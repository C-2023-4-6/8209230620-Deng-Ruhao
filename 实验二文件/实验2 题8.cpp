#include <iostream>
using namespace std;
double getJdz(double a){
	a = (a > 0) ? a : -a;
	return a;
}
int main()
{
	double a,x;
	cin >> a;
	double i;
	x = a;
	if (a >= 0)
	{
		for (;;) {
			i = (x + a / x) / 2.0;
			if (getJdz(i - x) < 1E-5)
			{
				break;
			}
			x = i;
		}
		cout << x << endl;
	}
	else cout << "负数没有平方根" << endl;
}
