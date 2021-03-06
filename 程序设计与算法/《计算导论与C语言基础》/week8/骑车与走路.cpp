#include <iostream>
#define biketime 50
#define bikespeed 3.0
#define walkspeed 1.2

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double dist, bike, walk;
		cin >> dist;
		bike = 50 + (double)dist / bikespeed; // 騎車時間
		walk = (double)dist / walkspeed;	  // 走路時間
		if (bike > walk)
			cout << "Walk" << endl;
		else if (bike < walk)
			cout << "Bike" << endl;
		else
			cout << "All" << endl;
	}
	return 0;
}