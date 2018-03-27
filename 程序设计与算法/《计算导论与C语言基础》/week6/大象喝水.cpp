#include <iostream>
#define PI 3.14159

using namespace std;

int main() {
	int h, r, count = 0;
	double bucket, need = 20000;
	cin >> h >> r;
	bucket = PI * r * r * h;
	while (need - bucket > 0) {
		need -= bucket;
		count++;
	}
	count++;
	cout << count;
	return 0;
}