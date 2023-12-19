#include<iostream>
using namespace std;
const double pi = 3.14;
int main()
{
	double r, h;
	cout << "请输入半径：" << endl;
	cin >> r;
	cout << "请输入锥高：" << endl;
	cin >> h;
	double v;
	v = pi * r * r * h / 3;
	cout << "圆锥体积为" << v << endl;
}
