#include<iostream>
using namespace std;
int main()
{
	char y;
	int x,z,i;
	cin >> x >> y >> z;
	if (y == 43)//加号
	{
		i = x + z;
		cout << "运算结果为" << i << endl;
	}
	if (y == 45)//减号
	{
		i = x - z;
		cout << "运算结果为" << i << endl;
	}
	if (y == 42)//乘号
	{
		i = x * z;
		cout << "运算结果为" << i << endl;
	}
	if (y == 47)//除号
		if (z != 0)
		{
			i = x / z;
			cout << "运算结果为" << i << endl;
		}
		else cout << "除数不能为0" << endl;
	if (y == 37)//%
	{
		i = x % z;
		cout << "运算结果为" << i << endl;
	}
	if (y != 43 && y != 45 && y != 42 && y != 47 && y != 37)
		cout << "运算符不合法" << endl;
	return 0;
}