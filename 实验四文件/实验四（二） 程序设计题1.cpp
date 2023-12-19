#include <iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int size1 = strlen(s1);
	int size2 = strlen(s2);

	for (int i = 0; i <= size2 - size1; i++)
	{
		int j = 0;
		for (; j < size1; j++)
		{
			if (s1[j] != s2[j + i])
			{
				break;
			}
		}
		if (j == size1)
		{
			return i;
		}
	}
	return -1;
}

int main() {
	char* p_s1 = new char[100];
	cout << "enter the first string:" << endl;
	cin >> p_s1;
	int size1 = strlen(p_s1);
	char* s1 = new char[size1 + 1];
	strcpy_s (s1,size1+1, p_s1);
	
	char* p_s2 = new char[100];
	cout << "enter the second string:" << endl;
	cin >> p_s2;
	int size2 = strlen(p_s2);
	char* s2 = new char[size2 + 1];
	strcpy_s (s2,size2+1, p_s2);

	delete[]p_s1;
	delete[]p_s2;
	/*已经得到s1 s2 两个字符串,最后记得释放s1 s2*/
	
	cout << "indexOf(s1.s2)is" <<'\t' << indexOf(s1, s2) << endl;
	delete[] s1;
	delete[] s2;

	
}