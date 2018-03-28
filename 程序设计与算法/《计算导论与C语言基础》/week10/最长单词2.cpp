#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int size = 0, lastsize = 0;
	bool flag = false, last = false;
	string input, temp, output;
	getline(cin, input);
	stringstream ss(input);
	while (ss >> temp) {

		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '.') {
				last = true;
			}
		}//判斷目前單字是否為最後一組

		if (last) {				
			size = temp.size() - 1;
			if (size > lastsize) {
				output = temp;
				flag = true; //判斷最後一組單字是否為最長的,
			}
		}//判斷是否為最後一組單字
		
		else
			size = temp.size();
		
		if (size > lastsize && last == false) {				
			output = temp;	
			lastsize = size;
		}		
		
	}

	if (last && flag) {
		output.pop_back();
		cout << output;
	}
	else		
		cout << output;
	return 0;
}