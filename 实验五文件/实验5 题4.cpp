#include <iostream>             
using namespace std;

class student {
public:
	int num;
	int grades;

	student(int num_, int grades_)
	{
		num = num_;
		grades = grades_;
	}
};

int max(student* stu) {
	int tem1 = 0;
	int tem2 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (((stu + i)->grades) > tem1) {
			tem1 = (stu + i)->grades;
			tem2 = (stu + i)->num;
		}
	}
	return tem2;
}

int main() {

	student stu[5] = {
	student(1,32),
	student(2,98),
	student(3,100),
	student(4,23),
	student(5,99),
	};
	student* p = stu;
	cout << "分数最高的是：" << max(p);
}