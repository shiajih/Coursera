#include <iostream>

using namespace std;

int main() {
	int n, x, y, count = 0;
	cin >> n >> x >> y;
	while (y > 0) {
		y = y - x;
		count++;
	}
	n = n - count;
	if (n < 0)
		cout << 0;
	else
		cout << n;
	return 0;
}