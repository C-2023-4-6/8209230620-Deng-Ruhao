#include<iostream>
using namespace std;

void swap_2(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void n_arr(int arr[],int size)
{
	for (int i = 0; i <size ; i++)
	{
		for (int j = i; j < size-1; j++)
			if (arr[i] > arr[j + 1])
				swap_2(&(arr[i]), &(arr[j + 1]));
	}

}

int main()
{
    int size1;
    cout << "请输入第一个数组元素数：" << endl;
    cin >> size1;
    int* list1 = new int[size1];
    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    cout<<"指针指向：" << list1 << endl;
	n_arr(list1, size1);
	for (int i = 0; i < size1; i++)
	{
		cout << list1[i] << '\t';
	}
	delete[]list1;
}