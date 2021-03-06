#include <iostream>
#include <map>
using namespace std;

class A {
private:
	int val;
public:
	A(int _val);
	A();
	virtual ~A() { cout << "A::destructor" << endl; };
	static int count;
	void operator delete(void* a){
		count--;
	}
};

A::A(int _val) {
	++count;
	val = _val;
}
A::A() {
	++count;
}

class B:public A {
private:
	int B_val;
public:
	B(int B_val);
	B();
	virtual ~B() { cout << "B::destructor" << endl; };
	B& operator = (B& b){
		return b;
	}
};

B::B(int _B_val) {
	B_val = _B_val;	
}

B::B() {
}

int A::count = 0;
void func(B b) { }

int main()
{
	A a1(5), a2;
	cout << A::count << endl;
	B b1(4);
	cout << A::count << endl;
	func(b1);
	cout << A::count << endl;
	A * pa = new B(4);
	cout << A::count << endl;
	delete pa;
	cout << A::count << endl;
	return 0;
}