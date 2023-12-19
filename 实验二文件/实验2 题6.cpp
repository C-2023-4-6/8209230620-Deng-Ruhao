#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int j, i;//最大公因数和最小公倍数
	cin >> a >> b;
	/*最大公因数*/
	if (a < b)
	{
		j = a;
		while (1)
		{
			if ((a % j) == 0 && (b % j) == 0)
				break;
			else j--;
		}
	}
	else
	{
		j = b;
		while (1)
		{
			if ((a % j) == 0 && (b % j) == 0)
				break;
			else j--;
		}
	}
	/*由于两个数的乘积等于这两个数的最大公约数与最小公倍数的积*/
	i = a * b / j;
	cout << "最大公因数为" << j << endl;
	cout << "最小公倍数为" << i << endl;
}