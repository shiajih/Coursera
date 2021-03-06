#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct point {
	double x;
	double y;
	double dist;
};

int main() {
	int n;	
	double max = 0, temp = 0;
	cin >> n;
	point po[200];
	for (int i = 0; i < n; i++) {
		cin >> po[i].x >> po[i].y;		
	}	

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			temp = sqrt(pow(po[j].x - po[i].x, 2) + pow(po[j].y - po[i].y, 2));
			if (temp > max)
				max = temp;
		}
	}
	cout << fixed << setprecision(4) << max << endl;

	return 0;
}