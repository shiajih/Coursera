#include <iostream>

using namespace std;

int main() {
	int n, ten, ind;
	cin >> n;
	for (int i = 10; i < n; i++) {
		ten = i / 10;
		ind = i - ten * 10;
		if (i % (ten + ind) == 0)
			cout << i << endl;
	}
	return 0;
}