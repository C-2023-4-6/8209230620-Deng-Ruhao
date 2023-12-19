#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:          // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void in() {
		cin >> hour;
		cin >> minute;
		cin >> sec;
	} 

	void show() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1; 
	t1.in();
	t1.show();
}
