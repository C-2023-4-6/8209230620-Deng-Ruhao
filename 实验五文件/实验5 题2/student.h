#pragma once
using namespace std;
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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
