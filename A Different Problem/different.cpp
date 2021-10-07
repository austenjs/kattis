#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main() {
	long long int a, b; vector<long long int> ans;
	while (cin >> a >> b) {
		ans.push_back(abs(a - b));
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}

