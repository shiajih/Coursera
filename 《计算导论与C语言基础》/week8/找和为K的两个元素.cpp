#include <iostream>

using namespace std;

int main() {
	int n, num[1000], k, sum;
	bool flag = false;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (j > i && num[i] + num[j] == k)
				flag = true;
		}
	}
	if (flag)
		cout << "yes";
	else
		cout << "no";
	return 0;
}