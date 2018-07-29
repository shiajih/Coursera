#include <iostream>
using namespace std;
int sqr(int n) {
	return n * n;
}
int sum(int _a[], int n, int(*function)(int)) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (*function)(_a[i]);
	}
	return sum;
}
int main() {
	int t, n, a[0x100];
	cin >> t;
	for (int c = 0; c < t; ++c) {
		cin >> n;
		for (int i = 0; i < n; ++i) cin >> a[i];
		cout << sum(a, n, sqr) << endl;
	}
	return 0;
}