#include <iostream>             //��������ͷ�ļ���������
using namespace std;

class zhu {
private:
	int length;
	int height;
	int width;
public:
	void set_value() {
		cout << "length:";
		cin >> length;
		cout << "width:";
		cin >> width;
		cout << "height:";
		cin >> height;
	}
	int v()
	{
		return (length) * (height) * (width);
	}
};

int main() {
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "��������" << endl;
		zhu a;
		a.set_value();
		cout<<"���Ϊ��" << a.v() << endl;
	}
}