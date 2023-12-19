#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C, F;
	cout << "请输入华氏温度:" << endl;
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << "转化成摄氏度为：" << setprecision(3) << C << endl;
}
