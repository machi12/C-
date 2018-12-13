#include <iostream>
#include <string>

using namespace std;

class Date {
protected:				//保护数据成员
	int year;
	int month;
	int day;
public:					//公有成员方法
	void Set(int y, int m, int d);
	int GetYear();
	int GetMonth();
	int GetDay();
};

class Person {
protected:
	char name[20];
	char number[10];
	char sex;
	Date birthday;				//对象成员
public:
	Person();
	void Input();
	void Output();
	char *GetName();
};

class Student : virtual public Person {				//继承于Person类(虚基类)
protected:
	char speciality[20];
public:
	void Input();
	void Output();
};

class Graduate : virtual public Student {				//继承于Person类(虚基类)
protected:
	char researchTopic[50];				//研究课题
public:
	void Input();
	void Output();
};

class Teacher : virtual public Person {
protected:
	char academicTitle[20];				//教师职称
public:
	void Input();
	void Output();
};

class PostgraduateOnJob : public Graduate, public Teacher {
public:
	void Input();
	void Outpur();
};

class PostgraduateOnJob : public Graduate, public Teacher {
public:
	void Input();
	void Output();
};