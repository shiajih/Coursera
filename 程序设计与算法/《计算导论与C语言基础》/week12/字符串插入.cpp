#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, sub;

	while (cin >> str >> sub) {
		int ori = str.length();
		int maxi = 0;	//紀錄index
		int maxAS = 0;	//紀錄ascii
		int total = str.length() + sub.length();
		for (int i = 0; i < str.length(); i++) {
			int temp = str[i];			//ASCII值
			if (temp > maxAS) {
				maxi = i;
				maxAS = temp;
			}
		}

		str.resize(13);

		for (int i = ori - 1; i > maxi; i--) {
			str[i + 3] = str[i];
		}

		int k = 3;
		while (k-- > 0) {			
			str[maxi + k + 1] = sub[k];			
		}

		for (int i = 0; i < total; i++) {
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}