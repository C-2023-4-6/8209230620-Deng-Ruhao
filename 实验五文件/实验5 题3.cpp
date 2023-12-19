#include <iostream>             //将类声明头文件包含进来
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
		cout << "第" << i + 1 << "个长方体" << endl;
		zhu a;
		a.set_value();
		cout<<"体积为：" << a.v() << endl;
	}
}