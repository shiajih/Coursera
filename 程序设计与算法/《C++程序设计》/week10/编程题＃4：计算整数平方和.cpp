#include <iostream>
using namespace std;
class CType {
private:
	int val;
public:
	CType(int _val = 0) :val(_val) {};
	void setvalue(int _val) {
		val = _val;
	}
	CType operator++(int) {
		CType temp = *this;
		this->val = this->val * this->val;
		return temp;
	}
	friend ostream& operator<<(ostream &os, const CType& obj);
};

ostream& operator<<(ostream &os, const CType& obj) {
	os << obj.val;
	return os;
}

int main(int argc, char* argv[]) {
	CType obj;
	int n;
	cin >> n;
	while (n) {
		obj.setvalue(n);
		cout << obj++ << " " << obj << endl;
		cin >> n;
	}
	return 0;
}