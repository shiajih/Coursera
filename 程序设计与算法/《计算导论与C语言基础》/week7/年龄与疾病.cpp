#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n, pat[101], temp, a = 0, b = 0, c = 0, d = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pat[i];
		if (pat[i] >= 1 && pat[i] <= 18)
			a++;
		else if (pat[i] >= 19 && pat[i] <= 35)
			b++;
		else if (pat[i] >= 36 && pat[i] <= 60)
			c++;
		else
			d++;
	}
	cout << "1-18: " << fixed << setprecision(2) << ((double)a / (double)n) * 100 << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << ((double)b / (double)n) * 100 << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << ((double)c / (double)n) * 100 << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << ((double)d / (double)n) * 100 << "%" << endl;
	return 0;
}