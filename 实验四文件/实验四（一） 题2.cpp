#include <iostream>
using namespace std;

void swap_2(double *a,double *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	double arr[10];
	cout << "������10�����֣�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{   for(int j=i;j<9;j++)
		if (arr[i] > arr[j + 1])
			swap_2(&(arr[i]), &(arr[j + 1]));
	}
	cout << "�µ�����Ϊ��" << endl;
	for (int i = 0; i < 10; i++)
	{
	
		cout << arr[i]<<"\t";
	}
	
}