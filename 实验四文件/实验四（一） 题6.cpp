#include <iostream>
using namespace std;
int counts[26] = {};
void count(const char s[], int counts[]) 
{
	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i]==(97+j)||s[i]==(65+j))
			{
				counts[j]++;
			}
		}
	}
	for (int j = 0; j < 26; j++)
	{   
		if (counts[j] != 0)
		{
			cout << char(97 + j) << "����ĿΪ��" << counts[j]<<endl;
		}
	}
}

int main() {
	char str[100] = {};
	cout << "�������ַ�����" << endl;
	cin >> str;
	cout << "�ö��ַ�������ĸ����ĿΪ��" << endl;
	count(str, counts);
}