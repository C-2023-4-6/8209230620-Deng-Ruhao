#include <iostream>
using namespace std;
int main()
{
	char zm;
	cout << "ÇëÊäÈëÄãµÄ×ÖÄ¸£º" << endl;
	cin >> zm;
	if (zm >= 65)
	{
		if (zm <= 90)
		{
			zm += 1;
			cout << (int)zm << endl;
		}
		else
		{
			zm -= 32;
			cout << zm << endl;
		}
	}
	return 0;
}
