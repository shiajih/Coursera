#include <iostream>

using namespace std;

int main() {
	int n, max, score[101], temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];		
		if (score[i] > temp)
			temp = score[i];		
	}
	cout << temp;
	return 0;
}