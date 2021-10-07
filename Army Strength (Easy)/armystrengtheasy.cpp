#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main() {
	int testcase;
	vector<string> ans;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		int godzillas, mechas;
		cin >> godzillas >> mechas;
		vector<int>godzilla, mecha;
		for (int i = 0; i < godzillas; i++) {
			int a; cin >> a;
			godzilla.push_back(a);
		}
		for (int k = 0; k < mechas; k++) {
			int b; cin >> b;
			mecha.push_back(b);
		}
		sort(godzilla.begin(), godzilla.end(), greater<int>());
		sort(mecha.begin(), mecha.end(), greater<int>());
		while (godzilla.size() && mecha.size()) {
			if (godzilla[godzilla.size() - 1] >= mecha[mecha.size() - 1]) {
				mecha.pop_back();
			}
			else {
				godzilla.pop_back();
			}
		}
		if (godzilla.size() == 0) {
			ans.push_back("MechaGodzilla");
		}
		else {
			ans.push_back("Godzilla");
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}
