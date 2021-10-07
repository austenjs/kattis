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

bool isInside(int a, vector<int> b) {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == a) {
            return true;
        }
    }
    return false;
}

vector<int> removeRedundant(vector<int> a) {
    sort(a.begin(), a.end());
    vector<int>ans;
    for (int i = 0; i < a.size(); i++) {
        if (!isInside(a[i], ans)) {
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main() {
    int villagers,evenings;
    cin >> villagers >> evenings;
    vector<vector<int>>song; vector<int> bard = { 0 };
    for (int i = 0; i < villagers; i++) {
        vector<int>a = { 0 };
        song.push_back(a);
    }
    int k = 0;
    for (int i = 0; i < evenings; i++) {
        k++;
        vector<int> singers;
        int singer; cin >> singer;
        for (int i = 0; i < singer; i++) {
            int vil; cin >> vil;
            singers.push_back(vil);
        }
        if (isInside(1,singers)) {
            for (int i = 0; i < singers.size(); i++) {
                song[singers[i] - 1].push_back(k);
            }
            bard.push_back(k);
        }
        else {
            vector<int>tempSong;
            for (int i = 0; i < singers.size(); i++) {
                for (int k = 0; k < song[singers[i]-1].size(); k++) {
                    tempSong.push_back(song[singers[i]-1][k]);
                }
            }
            tempSong = removeRedundant(tempSong);
            for (int i = 0; i < singers.size(); i++) {
                song[singers[i]-1] = tempSong;
            }
        }        
    }
    cout << 1 << endl;
    for (int i = 1; i < villagers; i++) {
        if (song[i].size() == bard.size()) {
            cout << i + 1 << endl;
        }
    }
}





