#include <iostream>

using namespace std;

class A {
public:
	A()
	{
		cout << "����A" << endl;
	}
	~A() {
		cout << "����A" << endl;
		getchar();
	}
};

class B {
public:
	B() {
		cout << "����B" << endl;
	}
	~B() {
		cout << "����B" << endl;
		getchar();
	}
private:
	A a;
};

int main() {
	B obj;
	system("pause");
	return 0;
}