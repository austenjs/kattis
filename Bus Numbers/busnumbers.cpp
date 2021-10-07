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

int main() {
    int busses; cin >> busses;
    vector<int> park;
    for (int i = 0; i < busses; i++) {
        int bus; cin >> bus;
        park.push_back(bus);
    }
    if (park.size() == 1) { cout << park[0]; return 0; }
    sort(park.begin(), park.end());
    vector<string>ans;
    int current = park[0]; int end = 0;
    for (int i = 1; i < park.size(); i++) {
        if (park[i] - park[i-1] > 1) {
            if (end != 0 && end - current >1) {
                ans.push_back(to_string(current) + "-" + to_string(end));
            }
            else if (current - end == -1) {
                ans.push_back(to_string(current));
                ans.push_back(to_string(end));
            }
            else {
                ans.push_back(to_string(current));
            }
            current = park[i];
            end = park[i];
        }
        else {
            end = park[i];
        }
    }
    if (end - park[park.size() - 2] == 1) {
        if (end != 0 && end - current > 1) {
            ans.push_back(to_string(current) + "-" + to_string(end));
        }
        else if (current - end == -1) {
            ans.push_back(to_string(current));
            ans.push_back(to_string(end));
        }
    }
    else {
        ans.push_back(to_string(end));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}





