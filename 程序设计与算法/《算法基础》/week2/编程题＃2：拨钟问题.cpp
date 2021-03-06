#include <bits/stdc++.h>
using namespace std;

vector<int> perfect;
int init[10] = { 0 }, adjested[10] = { 0 }, op[10] = { 0 };
int operations[10][10] ={
{ 0 },
//   A  B  C  D  E  F  G  H  I
{ 0, 1, 1, 0, 1, 1, 0, 0, 0, 0 },  //op1: ABDE
{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },  //op2: ABC
{ 0, 0, 1, 1, 0, 1, 1, 0, 0, 0 },  //op3: BCEF
{ 0, 1, 0, 0, 1, 0, 0, 1, 0, 0 },  //op4: ADG
{ 0, 0, 1, 0, 1, 1, 1, 0, 1, 0 },  //op5: BDEFH
{ 0, 0, 0, 1, 0, 0, 1, 0, 0, 1 },  //op6: CFI
{ 0, 0, 0, 0, 1, 1, 0, 1, 1, 0 },  //op7: DEGH
{ 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },  //op8: GHI
{ 0, 0, 0, 0, 0, 1, 1, 0, 1, 1 }  //op9: EFHI
};

void operate(int op_num, int op_counts) {
	for (int k = 1; k <= 9; k++) {
		adjested[k] += operations[op_num][k] * op_counts;
		adjested[k] %= 4;
	}
}

int guess() {
	op[4] = (4 - adjested[1]) % 4;
	operate(4, op[4]);
	op[5] = (4 - adjested[2]) % 4;
	operate(5, op[5]);
	op[6] = (4 - adjested[3]) % 4;
	operate(6, op[6]);
	op[7] = (4 - adjested[4]) % 4;
	operate(7, op[7]);
	op[8] = (4 - adjested[7]) % 4;
	operate(8, op[8]);
	if (adjested[5] == adjested[6] && adjested[5] == adjested[8] && adjested[5] == adjested[9]) {
		op[9] = (4 - adjested[9]) % 4;
		operate(9, op[9]);
		int steps = 0;
		for (int k = 1; k <= 9; k++) {
			steps += op[k];
		}
		return steps;
	}
	return 101;
}

int enumerate() {
	int c = 0;
	int minsteps = INT_MAX;
	int steps = 0;
	while (c < 64) {
		op[3] = c / 16;
		op[2] = c % 16 / 4;
		op[1] = c % 4;
		memcpy(adjested, init, sizeof(init));
		operate(3, op[3]);
		operate(2, op[2]);
		operate(1, op[1]);
		steps = guess();
		if (steps < minsteps) {
			minsteps = steps;
			perfect.clear();
			for (int k = 1; k <= 9; k++) {
				while (op[k]--) {
					perfect.push_back(k);
				}
			}
		}
		c++;
	}
	return minsteps;
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);	
	
	for (int i = 1; i <= 9; i++) {
		cin >> init[i];
	}
	if (enumerate() < 101) {
		for (int k = 0; k<perfect.size(); k++) {
			cout << perfect.at(k) << ' ';
		}
	}
	
	return 0;
}