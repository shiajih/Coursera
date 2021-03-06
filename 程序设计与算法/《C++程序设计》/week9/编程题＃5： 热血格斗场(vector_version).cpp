#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

vector<pair<int, int> > idtostr;
int find_min(int value, vector<pair<int, int>>::iterator now) {
	vector<pair<int, int>>::iterator j = idtostr.begin();
	int min = INT_MAX;
	vector<pair<int, int>>::iterator need_return;
	for (j; j != now; j++) {
		if (abs(j->second - value) < min) {
			min = abs((j->second) - value);
			need_return = j;
		}
		else if (abs(j->second - value) == min) {	// find the same of absolute
			if (j->second < need_return->second)
				need_return = j;
		}
	}
	return need_return->first;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	cin >> n;
	idtostr.push_back(make_pair(1, 1000000000));
	for (int i = 0; i < n; i++) {
		int id, str;
		cin >> id >> str;
		idtostr.push_back(make_pair(id, str));
	}

	vector<pair<int, int>>::iterator i = ++idtostr.begin();
	for (i; i != idtostr.end(); i++) {
		cout << i->first << " " << find_min(i->second, i) << endl;
	}

	/*vector<pair<int, int>>::iterator t = idtostr.begin();
	for (t; t != idtostr.end(); t++) {
	cout << t->first << " " << t->second << endl;
	}*/
	return 0;
}