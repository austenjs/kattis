#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>

using namespace std;
int exp(int a, int b) {
	int ans = 1;
	for (int i = 0; i < b; i++) {
		ans *= a;
	}
	return ans;
}
string converter1(char a) {
	if (a == '0') {
		return "000";
	}
	else if (a == '1') {
		return "001";
	}
	else if (a == '2') {
		return "010";
	}
	else if (a == '3') {
		return "011";
	}
	else if (a == '4') {
		return "100";
	}
	else if (a == '5') {
		return "101";
	}
	else if (a == '6') {
		return "110";
	}
	else if (a == '7') {
		return "111";
	}

}
string converter2(string binary) {
	int ans = 0, power = 0;
	int binary1 = stoi(binary);
	while (binary1 > 0) {
		ans += (binary1 % 10) * exp(2, power);
		power++; binary1 /= 10;
	}
	if (ans < 10) {
		return to_string(ans);
	}
	else if (ans == 10) {
		return "A";
	}
	else if (ans == 11) {
		return "B";
	}
	else if (ans == 12) {
		return "C";
	}
	else if (ans == 13) {
		return "D";
	}
	else if (ans == 14) {
		return "E";
	}
	else if (ans == 15) {
		return "F";
	}
}
int main() {
	string octal; cin >> octal;
	vector<string>temp;vector<char> binary;
	for (int i = 0; i < octal.size(); i++) {
		temp.push_back(converter1(octal[i]));
	}
	for (int i = 0; i < temp.size(); i++) {
		for (int k = 0; k < temp[i].size(); k++) {
			binary.push_back(temp[i][k]);
		}
	}
	while (binary.size() % 4 != 0) {
		binary.insert(binary.begin(), '0');
	}
	vector<string>ans;	
	string temp1 = "";
	for (int i = 0; i < binary.size(); i++) {
		temp1+= binary[i];
		if (temp1.size() == 4) {
			ans.push_back(converter2(temp1));
			temp1 = "";
		}
	}
	bool firstZero = false;
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] == "0" && !firstZero) {
			continue;
		}
		else if (ans[i] != "0" && !firstZero) {
			firstZero = true;
		}
		cout << ans[i];
	}
	if (!firstZero) {
		cout << "0";
	}

}	