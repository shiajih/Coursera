#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, arr[20000];
	while (cin >> n) {
		if (n == 0)
			return 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		if (n % 2 == 0) {
			int average = (arr[n / 2] + arr[(n / 2) - 1]) / 2;
			cout << average << endl;
		}
		else {
			cout << arr[n / 2] << endl;
		}
	}

	return 0;
}