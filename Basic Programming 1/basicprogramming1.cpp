#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>
#include <cmath>

using namespace std;

bool inside(unsigned long long int num, vector<unsigned long long int>k) {
	for (int i = 0; i < k.size(); i++) {
		if (num == k[i]) {
			return true;
		}
	}
	return false;
}
int main() {
	unsigned long long int N, t; cin >> N >> t;
	vector<unsigned long long int>A;
	for (int i = 0; i < N; i++) {
		unsigned long long int k; cin >> k;
		A.push_back(k);
	}
	if (t == 1) {
		cout << 7;
		return 0;
	}
	else if(t == 2) {
		if (A[0] > A[1]) {
			cout << "Bigger";
		}
		else if (A[0] == A[1]) {
			cout << "Equal";
		}
		else {
			cout << "Smaller";
		}
	}
	else if (t == 3) {
		vector<unsigned long long int>k;
		k.push_back(A[0]); k.push_back(A[1]); k.push_back(A[2]);
		sort(k.begin(), k.end());
		cout << k[1];
	}
	else if (t == 4) {
		unsigned long long int sum = 0;
		for (int i = 0; i < A.size(); i++) {
			sum += A[i];
		}
		cout << sum;
	}
	else if (t == 5) {
		unsigned long long int sum = 0;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] % 2 == 0) {
				sum += A[i];
			}
		}
		cout << sum;
	}
	else if (t == 6) {
		for (int i = 0; i < A.size(); i++) {
			A[i] = A[i] % 26;
		}
		for (int i = 0; i < A.size(); i++) {
			cout << char(A[i] + 97);
		}
		
	}
	else if (t == 7) {
		vector<unsigned long long int>visited; unsigned long long int index = 0;
		while (true) {
			index = A[index];
			if (index > N-1 || index< 0) {
				cout << "Out";
				return 0;
			}
			else if (index == N - 1) {
				cout << "Done";
				return 0;
			}
			else if (visited.size() >=N && inside(index, visited)) {
				cout << "Cyclic";
				return 0;
			}
			visited.push_back(index);
			index = A[index];
		}
	}
}
