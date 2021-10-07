#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>

using namespace std;


int main() {
	int rooms, booked;
	cin >> rooms >> booked;
	vector<int>ans;
	for (int i = 0; i < booked; i++) {
		int a; cin >> a;
		ans.push_back(a);
	}
	if (rooms <= booked) {
		cout << "too late";
	}
	else if (booked == 0) {
		cout << rooms;
	}
	else {
		sort(ans.begin(), ans.end()); bool change = false;
		int left = 0, right = ans.size()-1;
		if (ans[0] != 1) {
			cout << 1;
			return 0;
		}
		else if (ans[ans.size()-1] != rooms) {
			cout << rooms;
			return 0;
		}
		int counterL = 1, counterR = rooms;
		while (true) {
			int a = ans[left], b = ans[right];
			if (a + b != rooms + 1 || a!=counterL || b!= counterR ) {
				if (a != counterL) {
					cout << counterL; break;
				}
				else {
					cout << counterR; break;
				}
			}
			left++; right--; counterL++; counterR--;
		}
	}
}