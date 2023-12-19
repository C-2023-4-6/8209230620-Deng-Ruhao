#include<iostream>
using namespace std;


bool unique(int arr[], int leng, int num) {
	for (int i = 0; i < leng;i++) 
	{
		if (num == arr[i])
			return false;
	}
	return true;
}


int main() {
	int a[10];
	cout << "enter ten num:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int* p = new int[10];//假设每个都是独一无二的，申请个大点的空间
	int j = 0;
	for (int i=0;i<10;i++)
	{
		if (unique(p, j, a[i]))
		{
			p[j] =a[i];
			j++;
		}
	}
	cout << "new array is:" << endl;
	for (int i = 0; i < j; i++)
	{
		cout << p[i]<<'\t';
	}
	delete[] p;
}