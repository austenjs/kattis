#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>

using namespace std;

bool inside(vector<int> index, int i) {
	for (int k = 0; k < index.size(); k++) {
		if (index[k] == i) {
			return true;
		}
	}
	return false;
}
int fastestIndex(vector<float>a, vector<int>index) {
	float current = 1000000; int indexs = 0;
	for (int i = 0; i < a.size(); i++) {
		if (inside(index,i)) { continue; }
		if (current >= a[i]) {
			current = a[i]; indexs = i;
		}
	}
	return indexs;
}

float minimum(vector<float>first, vector<float>second, vector<int>index1, vector<int>index2) {
	float sum = 10000000;
	for (int i = 0; i < 4; i++) {
		float sumk = 0;
		if (!inside({ index2[0],index2[1],index2[2] }, index1[i])) {
			sumk += first[index1[i]] + second[index2[0]] + second[index2[1]] + second[index2[2]];
		}
		else {
			sumk += first[index1[i]];
			for (int k = 0; k < 4; k++) {
				if (index2[k] != index1[i]) {
					sumk += second[index2[k]];
				}
			}
		}
		if (sumk < sum) {
			sum = sumk;
		}
	}
	return sum;
}

vector<int> indexes(vector<float>first, vector<float>second, vector<int>index1, vector<int>index2) {
	float sum = 10000000; vector<int> ans;
	for (int i = 0; i < 4; i++) {
		float sumk = 0; vector<int> temp;
		if (!inside({ index2[0],index2[1],index2[2] }, index1[i])) {
			sumk = first[index1[i]] + second[index2[0]] + second[index2[1]] + second[index2[2]];
			temp.push_back(index1[i]); temp.push_back(index2[0]); temp.push_back(index2[1]); temp.push_back(index2[2]);
		}
		else {
			sumk += first[index1[i]];
			temp.push_back(index1[i]);
			for (int k = 0; k < 4; k++) {
				if (index2[k] != index1[i]) {
					sumk += second[index2[k]];
					temp.push_back(index2[k]);
				}
			}
		}
		if (sumk < sum) {
			sum = sumk;
			ans = temp;
		}
	}
	return ans;
}
int main() {
	int testCases;
	vector<string> names;vector<float> firstLeg, Legs;
	cin >> testCases; cin.ignore();
	for (int i = 0; i < testCases; i++) {
		string name; cin >> name; names.push_back(name);
		float first, rest;
		cin >> first; firstLeg.push_back(first);
		cin >> rest; Legs.push_back(rest);
	}
	vector<int>first = {}, rest = {};
	for (int i = 0; i < 4; i++) {
		int k = fastestIndex(firstLeg,first);
		first.push_back(k);
	}
	for (int i = 0; i < 4; i++) {
		int k = fastestIndex(Legs, rest);
		rest.push_back(k);
	}
	cout << minimum(firstLeg, Legs, first, rest) << endl;
	vector<int> ans = indexes(firstLeg, Legs, first, rest);
	for (int i = 0; i < 4; i++) {
		cout << names[ans[i]] << endl;
	}
	
	
}