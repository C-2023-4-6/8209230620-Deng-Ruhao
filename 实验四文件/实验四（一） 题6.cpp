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
			cout << char(97 + j) << "的数目为：" << counts[j]<<endl;
		}
	}
}

int main() {
	char str[100] = {};
	cout << "请输入字符串：" << endl;
	cin >> str;
	cout << "该段字符串各字母的数目为：" << endl;
	count(str, counts);
}