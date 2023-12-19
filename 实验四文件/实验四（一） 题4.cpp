#include <iostream>
using namespace std;

void swap_2(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}

	for (int i =0; i < size2; i++)
	{
		list3[size1+i] = list2[i];
	}

	for (int i = 0; i < size1+size2; i++)
	{
		for (int j = i; j < size1+size2-1; j++)
			if (list3[i] > list3[j + 1])
				swap_2(&(list3[i]), &(list3[j + 1]));
	}
}

int main() {
	int size1, size2;

	cout << "请输入第一个数组元素数：" << endl;
	cin >> size1;
	int* list1 = new int[size1];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}

	cout << "请输入第二个数组元素数：" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}

	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);


	cout << "新的数组为：" << endl;
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << "\t";
	}



	delete[] list1;
	delete[] list2;
	delete[] list3;
}