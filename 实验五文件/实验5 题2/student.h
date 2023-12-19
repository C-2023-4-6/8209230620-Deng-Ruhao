#pragma once
using namespace std;
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value (int num,const char name[],char sex) {
		this->num = num;
		for (int i = 0; i < 20; i++) {
			(this->name)[i] = name[i];
		}
		this->sex= sex;
	}
private:
	int num;
	char name[20];
	char sex;
};
