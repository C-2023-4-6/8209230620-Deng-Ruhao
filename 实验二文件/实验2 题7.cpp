#include <iostream>
using namespace std;
int main()
{
	char i = '*';
	for (int a = 0; a < 5; a++)
	{
		{
			for (int b = 0; b <= a; b++)
				cout << i;
		}
		cout << '\n';
	}
}
