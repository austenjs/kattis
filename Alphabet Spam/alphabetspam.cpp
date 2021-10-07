#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	char input; int underscores = 0, capitals =0 , lowercases = 0, symbols = 0;
	while(cin >> input) {
		if (input <= 'Z' && input >= 'A') { capitals++; }
		else if (input <= 'z' && input >= 'a') { lowercases++; }
		else if (input == '_') { underscores++; }
		else { symbols++; }
	}
	int total = underscores + capitals + lowercases + symbols;
	cout << float(underscores) / float(total) << endl;
	cout << float(lowercases) / float(total) << endl;
	cout << float(capitals) / float(total) << endl;
	cout << float(symbols) / float(total) << endl;

}
