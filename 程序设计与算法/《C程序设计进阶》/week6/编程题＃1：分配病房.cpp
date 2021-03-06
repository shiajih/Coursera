#include <iostream>
#include <iomanip>

using namespace std;

void judge(float(*patient)[2], float level) {
	float result[50][2] = { 0 };
	int counter = 0;	//紀錄大於level的
	for (int i = 0; i < 50; patient++, i++) {
		if ((*patient)[1] > level) {
			result[counter][0] = (*patient)[0];
			result[counter][1] = (*patient)[1];
			counter++;
		}
	}
	if (counter == 0)
		cout << "None." << endl;
	else {
		float max = 0;
		int maxNUM = 0;
		for (int i = 0; i < counter; i++) {
			for (int j = 0; j < counter; j++) {
				if (result[j][1] > max) {
					max = result[j][1];
					maxNUM = j;
				}
			}
			cout << setw(3) << setfill('0') << (int)result[maxNUM][0] << ' ' << setiosflags(ios::fixed) << setprecision(1) << max << endl;
			result[maxNUM][1] = 0;
			max = 0;
		}
	}
}

int main() {
	int m = 0;
	float level = 0;
	float patient[50][2] = { 0 };
	cin >> m >> level;
	for (int i = 0; i < m; i++) {
		cin >> patient[i][0] >> patient[i][1];
	}
	judge(patient, level);
	return 0;
}