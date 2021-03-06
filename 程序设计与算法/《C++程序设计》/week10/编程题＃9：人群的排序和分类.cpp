#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

class A {
public:
	A(int _age = 0) : age(_age), class_name('A'){}
	int age;
	char class_name;
};

class B: public A {
public:
	B(int _age) {
		age = _age;
		class_name = 'B';
	}
};

void Print(A* a) {	
	cout << a->class_name << " " << a->age << endl;
}

struct Comp {
	bool operator() (const A* a, const A* b) const {
		return a->age < b->age;
	}
};

int main()
{

	int t;
	cin >> t;
	set<A*, Comp> ct;
	while (t--) {
		int n;
		cin >> n;
		ct.clear();
		for (int i = 0; i < n; ++i) {
			char c; int k;
			cin >> c >> k;

			if (c == 'A')
				ct.insert(new A(k));
			else
				ct.insert(new B(k));
		}
		for_each(ct.begin(), ct.end(), Print);
		cout << "****" << endl;
	}
}