#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>

using namespace std;


int main() {
	int prices, bound;
	cin >> prices >> bound;
	vector<int>ans;
	for (int i = 0; i < prices; i++) {
		int price; cin >> price;
		ans.push_back(price);
	}
	if (ans.size() < 2) {
		cout << ans.size();
	}
	else {
		sort(ans.begin(), ans.end());
		while (true) {
			if (ans[ans.size() - 1] + ans[ans.size() - 2] > bound && ans.size()>=2){
				ans.pop_back();
			}
			else {
				break;
			}
		}
		cout << ans.size();
	}
}