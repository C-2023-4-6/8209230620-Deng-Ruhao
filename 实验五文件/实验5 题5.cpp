#include <iostream>             //将类声明头文件包含进来
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")"<<endl;
	}
};

int main() {
	point p1;
	point p2;
	cout << "p1:";
	p1.display();
	cout << "p2:";
	p2.display();
	p2.setPoint(121,312);
	p2.display();

	
}