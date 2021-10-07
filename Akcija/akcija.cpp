#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	int data; cin >> data; vector<int>ans;
	for (int i = 0; i < data; i++) {
		int input; cin >> input;
		ans.push_back(input);
	}
	sort(ans.begin(), ans.end());
	int price = 0; int counter = 0;
	for (int i = ans.size() - 1; i > -1; i--) {
		if (counter == 2) { counter = 0; continue; }
		else { price += ans[i]; counter++; }
	}
	cout << price;
}
