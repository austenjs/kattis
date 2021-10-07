#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	string ans,realans = "";
	getline(cin, ans);
	char current = ' ';
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] != current) {
			current = ans[i];
			realans += ans[i];
		}
	}
	cout << realans << endl;
}


