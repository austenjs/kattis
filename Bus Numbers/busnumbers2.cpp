#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <string.h>

using namespace std;

int cube(int a) {
	return a * a * a;
}
int main() {
	int upper; cin >> upper;
	bool ans = false;
	for (int i = upper; i > 0; i--) {
		int counter = 0;
		int bot = 0, top = 74;
		while (bot < top) {
			if (cube(bot) + cube(top) == i) {
				counter++; bot++; top--;
				if (counter >= 2) {
					cout << i;
					ans = true;
					break;
				}
			}
			else if (cube(bot) + cube(top) < i) {
				bot++;
			}
			else {
				top--;
			}
		}
		if (ans) {
			break;
		}
	}
	if (!ans) {
		cout << "none";
	}
}