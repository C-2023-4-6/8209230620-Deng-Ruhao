#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:          // ���ݳ�ԱΪ���õ�
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
