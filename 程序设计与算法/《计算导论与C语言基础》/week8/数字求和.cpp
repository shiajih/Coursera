#include <iostream>

using namespace std;

int main() {
	int n, a, b, c, d, e, sum = 0;
	cin >> n >> a >> b >> c >> d >> e;
	if (a < n)
		sum += a;
	if (b < n)
		sum += b;
	if (c < n)
		sum += c;
	if (d < n)
		sum += d;
	if (e < n)
		sum += e;
	cout << sum;
	return 0;
}