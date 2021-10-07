#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void printer(vector<char> inp) {
	for (int i = 0; i < inp.size(); i++) {
		cout << inp[i];
	}
}
int main()
{
	vector<vector<char>> ans;
	int instruction;
	cin >> instruction;
	while (instruction != 0) {
		vector<char> temp = { '?','?','?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' ,'?' };
		for (int i = 0; i < instruction; i++) {
			string inst, bit1, bit2;
			cin >> inst;
			if (inst == "SET") {
				cin >> bit1;
				int a = 31 - stoi(bit1);
				temp[a] = '1';
			}
			else if (inst == "CLEAR") {
				cin >> bit1;
				int a = 31 - stoi(bit1);
				temp[a] = '0';
			}
			else if (inst == "AND") {
				cin >> bit1 >> bit2;
				int a = 31 - stoi(bit1) , b =31 - stoi(bit2);
				if (temp[a] == temp[b]) {
					temp[a] = temp[b];
				}
				else if (temp[a] == '0' || temp[b] == '0') {
					temp[a] = '0';
				}
				else if (temp[a] == '?' || temp[b] == '?') {
					temp[a] = '?';
				}
			}
			else if (inst == "OR") {
				cin >> bit1 >> bit2;
				int a =31 -  stoi(bit1), b = 31- stoi(bit2);
				if (temp[a] == temp[b]) {
					temp[a] = temp[b];
				}
				else if (temp[a] == '1' || temp[b] == '1') {
					temp[a] = '1';
				}
				else if (temp[a] == '?' || temp[b] == '?') {
					temp[a] = '?';
				}
			}
		}
		ans.push_back(temp);
		cin >> instruction;
	}
	for (int k = 0; k < ans.size(); k++) {
		printer(ans[k]);
		cout << endl;
	}
}
