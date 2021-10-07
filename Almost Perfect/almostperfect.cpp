#include <iostream>
#include <cstdlib>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include <math.h>
using namespace std;

bool isInside(long long int a, vector<long long int> b) {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == a) {
            return true;
        }
    }
    return false;
}
int main() {
    vector<string>ans;
    long long int k;
    while (cin>>k){
        long long int cur = 0;
        vector<long long int>inside;
        for (long long int i = 1; i < int(sqrt(k) + 1); i++) {
            if (k % i == 0) {
                cur += i;
                inside.push_back(i);
            }
        }
        for (long long int i = int(sqrt(k)); i > 1; i--) {
            if (k % i == 0 && !isInside(k/i,inside)) {
                cur += k / i;
                inside.push_back(k/i);
            }
        }
        if (abs(k - cur) == 0) {
            ans.push_back(to_string(k) + " perfect");
        }
        else if (abs(k - cur) <= 2) {
            ans.push_back(to_string(k) + " almost perfect");
        }
        else {
            ans.push_back(to_string(k) + " not perfect");
        }
    }
    for (int i = 0; i < int(ans.size()); i++) {
        cout << ans[i] << endl;
    }
}

