#include <iostream>

using namespace std;

int main() {
	double n, k;
	while (cin >> n >> k) {
		double sum = 200, counter = 1, salary = n;
		while (salary < sum && counter < 21) {
			sum = sum + (sum * (double)(k / 100));
			salary += n;
			counter++;
		}
		if (counter <= 20)
			cout << counter << endl;
		else
			cout << "Impossible" << endl;
	}
	return 0;
}