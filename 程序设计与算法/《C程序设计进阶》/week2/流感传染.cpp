#include <iostream>

using namespace std;

int main() {
	int n = 0, after = 0;	
	cin >> n;
	char room[101][101];
	bool tag[101][101];	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> room[i][j];
	cin >> after;

	for (int k = 1; k < after; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				tag[i][j] = false;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (room[i][j] == '@' && tag[i][j] == false) {

					if (j - 1 != -1 && room[i][j - 1] != '#' && room[i][j - 1] != '@') {
						room[i][j - 1] = '@';
						tag[i][j - 1] = true;
					}

					if (j + 1 != n && room[i][j + 1] != '#' && room[i][j + 1] != '@') {
						room[i][j + 1] = '@';
						tag[i][j + 1] = true;
					}

					if (i - 1 != -1 && room[i - 1][j] != '#' && room[i-1][j] != '@') {
						room[i - 1][j] = '@';
						tag[i - 1][j] = true;
					}

					if (i + 1 != n && room[i + 1][j] != '#' && room[i+1][j] != '@') {
						room[i + 1][j] = '@';
						tag[i + 1][j] = true;
					}
				}
			}
		}
	}
	
	/*for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << room[i][j];*/
	
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (room[i][j] == '@')
				count++;
	cout << count << endl;
	return 0;
}