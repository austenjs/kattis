#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio;
    cin.tie(0); cout.tie(0);


    char chars;
    vector<char> a;
    while (cin >> chars){
        if (chars != '<') {
            a.push_back(chars);
        }
        else {
            a.pop_back();
        }
    }
    for (int i = 0; i<int(a.size()); i++) {
        cout << a[i];
    }
}