#include <iostream>
using namespace std;

int main() {
	int n, _100 = 0, _50 = 0, _20 = 0, _10 = 0, _5 = 0, _1 = 0;
	cin >> n;
	while (n != 0) {
		if (n >= 100) {
			n = n - 100;
			_100++;
		}
		else if (n >= 50 && n < 100) {
			n = n - 50;
			_50++;
		}
		else if (n >= 20 && n < 50) {
			n = n - 20;
			_20++;
		}
		else if (n >= 10 && n < 20) {
			n = n - 10;
			_10++;
		}
		else if (n >= 5 && n < 10) {
			n = n - 5;
			_5++;
		}
		else {
			n--;
			_1++;
		}
	}
	cout << _100 << endl << _50 << endl << _20 << endl << _10 << endl << _5 << endl << _1;
	return 0;
}