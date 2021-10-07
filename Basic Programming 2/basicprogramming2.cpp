#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main() {
	int length; int instruction;
	cin >> length >> instruction;
	vector<int> lst;
	for (int i = 0; i < length; i++) {
		int a; cin >> a;
		lst.push_back(a);
	}
	sort(lst.begin(), lst.end());
	if (instruction == 1) {
		int ans = 7777;
		int indexL = 0, indexR = lst.size() - 1;
		while (indexL != indexR) {
			if (lst[indexL] + lst[indexR] < ans) { indexL++; }
			else if (lst[indexL] + lst[indexR] > ans) { indexR--; }
			else { cout << "Yes"; break; }
		}
		if (indexL >= indexR) { cout << "No"; }
	}
	else if (instruction == 2) {
		bool ans = false;
		for (int i = 0; i < lst.size() - 1; i++) {
			if (lst[i] == lst[i + 1]) { cout << "Contains duplicate"; ans = true; break; }
		}
		if (ans == false) { cout << "Unique"; }
	}
	else if (instruction == 3) {
		int counter = 1, current = lst[0]; bool ans = false;
		for (int i = 1; i < lst.size(); i++) {
			if (counter > float(length) / 2) {
				cout << current; ans = true; break;
			}
			else {
				if (lst[i] == current) { counter++; }
				else { current = lst[i]; counter = 1; }
			}
		}
		if (ans == false) {cout << -1;}
	}
	else if (instruction == 4) {
		if (length % 2 == 0) {
			cout << lst[length / 2 - 1] << " " << lst[length / 2];
		}
		else {
			cout << lst[length / 2];
		}

	}
	else {
		vector<int> ans;
		for (int i = 0; i < lst.size(); i++) {
			if (lst[i] >= 100 && lst[i] <= 999) { ans.push_back(lst[i]); }
		}
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}
	}




}
