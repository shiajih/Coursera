#include <iostream>

using namespace std;


int main() {
	int a, b, result = 0;
	char op;
	cin >> a >> b >> op;
	switch (op) {
	case '+':
		result = a + b;
		break;

	case '-':
		if (a > b)
			result = a - b;
		else
			result = b - a;
		break;

	case '/':
		if (b == 0) {
			cout << "Divided by zero!";
			return 0;
			break;
		}
		result = a / b;
		break;

	case '*':
		result = a * b;
		break;

	default:
		cout << "Invalid operator!";
		return 0;
		
	}
	cout << result << endl;
	
	return 0;
}