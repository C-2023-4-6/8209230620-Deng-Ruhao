#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	cout << "依次输入三角形三边" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if (x + y > z && x + z > y && z + y > x)
	{
		cout << "周长为：" << x + y + z << endl;
		if (x == y || x == z || z == y)
			cout << "此三角形为等腰三角捏" << endl;
		else
			cout << "此三角形不是等腰三角捏" << endl;
	}
	else
		cout << "组成不了三角形捏" << endl;
	return 0;
}
