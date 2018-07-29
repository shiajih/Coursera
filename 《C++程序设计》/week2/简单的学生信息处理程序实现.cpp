#include <bits/stdc++.h>
using namespace std;

class Student {
private:
	char* name;
	int age, id, fir, sec, thir, four;
	int avg;
public:
	Student(char* _name, int _age, int _id, int _fir, int _sec, int _thir, int _four) : name(_name), age(_age), id(_id), fir(_fir), sec(_sec), thir(_thir), four(_four) {}
	int calc() {
		avg = ((fir + sec + thir + four) / 4);
		return avg;
	}
	char* get_name() {
		return name;
	}
	int get_id() {
		return id;
	}
	int get_age() {
		return age;
	}
};

int main() {	
	char na[200] = { '\0' };
	int ta, tb, tc, td, te, tf;
	scanf("%[^,],%d,%d,%d,%d,%d,%d", na, &ta, &tb, &tc, &td, &te, &tf);
	Student s(na, ta, tb, tc, td, te, tf);
	cout << s.get_name() << "," << s.get_age() << "," << s.get_id() << "," << s.calc() << endl;	
	return 0;
}
