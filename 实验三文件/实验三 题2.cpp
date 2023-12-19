#include<iostream>
using namespace std;
bool is_prime(int i)
{
	for (int j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			return false;
		}
	}
	return true;
}
int main(){
	int j = 0;
		for (int m = 2;; m++)
		{
			if (is_prime(m) == 1) {
				cout << m<<'\t';
				j++;
			}
			if (j % 10 == 0&&(j!=0))
			{
				cout << '\n';
			}
			if (j >= 200)
				break;
		}
}