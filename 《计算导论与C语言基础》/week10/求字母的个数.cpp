#include <iostream>

using namespace std;

int main() {
	int _a = 0, _e = 0, _i = 0, _o = 0, _u = 0;
	char s[80];
	cin.getline(s, 80);
	int i = 0;
	while (s[i] != '\0') {
		switch (s[i]) {

		case'a':
			_a++;
			i++;
			break;

		case'e':
			_e++;
			i++;
			break;

		case'i':
			_i++;
			i++;
			break;

		case'o':
			_o++;
			i++;
			break;

		case'u':
			_u++;
			i++;
			break;

		default:
			i++;
		}
	}

	cout << _a << " " << _e << " " << _i << " " << _o << " " << _u << endl;
	return 0;
}