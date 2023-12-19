#include<iostream>
using namespace std;
int peaches(int day) {
	if (day == 10)
		return 1;
	else {
		return (peaches(day+1) + 1) * 2;
	}

}
int main() {
	int day = 1;
	cout << "第一天摘的桃子：" << endl;
	cout << peaches(day) << endl;
	return 0;
}