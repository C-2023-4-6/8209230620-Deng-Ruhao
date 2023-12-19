#include<iostream>
using namespace std;
int main() 
{
	int zm, kg, sz, qt;
	zm = kg = sz = qt = 0;
	int c;
	while ( (c=getchar()) != '\n')
	{  
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))//英文字母
		{
			zm++;
		}
		else 
		{
			if (c == 32)//SPACE
				kg++;
			else
			{
				if (c >= 48 && c <= 57)//数字
					sz++;
				else
					qt++;
			}
		}
	}
	cout << "字母为" << zm << endl;
	cout << "空格为" << kg << endl;
	cout << "数字字符为" << sz<< endl;
	cout << "其他为" << qt << endl;
}