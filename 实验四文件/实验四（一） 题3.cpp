#include <iostream>
using namespace std;
void change(bool* state) {
	if (*state == true)//true:open;false:close
	{
		*state=false;
	}
	else *state = true;
}

void S1(bool arr[], int leng) {
	for (int i = 0; i < leng; i++) 
	{
		change(&(arr[i]));
	}
}


int main() {
	bool arr[100];
	/***********************
	for (bool i : arr)
	{
		i = 0;
	}
	�˴��������÷�Χforѭ���ı���������ʵi��һ����ʱ���������������ĳ�ʼ����
	*************************/
	for (int i = 0; i < 100; i++) {
		arr[i] = false; // ��ʼ�������ÿ��Ԫ��Ϊ false
	}
	S1(arr, 100);
	for (int j = 2; j <=100; j++)
	{
		for (int i = j-1; i < 100; )
		{
			change(&arr[i]);
			i += j;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)
			cout << i+1 << ' ';
	}
}