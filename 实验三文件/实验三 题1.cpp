#include<iostream>
using namespace std;
int max_yinshu(int& m, int& n)
{
	int j;
	if (m< n)
	{
		j = m;
		while (1)
		{
			if ((m % j) == 0 && (n % j) == 0)
				break;
			else j--;
		}
	}
	else
	{
		j = n;
		while (1)
		{
			if ((m % j) == 0 && (n % j) == 0)
				break;
			else j--;
		}
	}

		return j;
}


int main(){
	int m, n;
	cout << "请输入第一个自然数：" << endl;
	cin >> m;
	cout << "请输入第二个自然数：" << endl;
	cin >> n;
	cout << "最大公因数为：" << endl;
	cout << max_yinshu(m, n)<<endl;
	cout << "最小公倍数为：" << endl;
	cout << m*n/max_yinshu(m, n) << endl;
	
}