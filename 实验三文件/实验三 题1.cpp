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
	cout << "�������һ����Ȼ����" << endl;
	cin >> m;
	cout << "������ڶ�����Ȼ����" << endl;
	cin >> n;
	cout << "�������Ϊ��" << endl;
	cout << max_yinshu(m, n)<<endl;
	cout << "��С������Ϊ��" << endl;
	cout << m*n/max_yinshu(m, n) << endl;
	
}