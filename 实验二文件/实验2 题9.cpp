#include <iostream>
using namespace std;
int main()
{
	int i = 2, sum = 0,day=1;
	while (1)
	{
		sum += i;
		i *= 2;
		if ((sum + i) >= 100)
		{
			break;
		}
		++day;
	}
	cout << (sum*0.8)/day<<endl;
	return 0;
}