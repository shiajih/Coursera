#include <iostream>

using namespace std;

int main() {
	int l, m, trees[10000] = { 0 }, start, end, coun = 0;
	cin >> l >> m;
	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		for (int i = start; i <= end; i++) {
			trees[i] = 1;
		}
	}
	for (int i = 0; i <= l; i++) {
		if (trees[i] == 1)
			coun++;
	}
	coun = l - coun + 1;
	cout << coun;
	return 0;
}