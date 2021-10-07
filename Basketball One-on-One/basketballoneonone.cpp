	#include <string>
	#include <iostream>
	#include <vector>
	#include <algorithm>
	#include <cstdlib>
	using namespace std;

	int main() {
		string sequence; char current;
		getline(cin, sequence);
		current = sequence[0];
		int scoreA = 0, scoreB = 0;
		while (abs(scoreA - scoreB) < 2 || (scoreA < 12 && scoreB < 12)) {
			for (int i = 1; i < sequence.size(); i++) {
				if (sequence[i] != 'A' && sequence[i] != 'B') {
					if (sequence[i - 1] == 'A' && current == 'A') {
						scoreA += sequence[i];
					}
					else if (sequence[i - 1] == 'B' && current == 'B') {
						scoreB += sequence[i];
					}
				}
				else { current = sequence[i]; }
			}
		}
		cout << (scoreA > scoreB ? 'A' : 'B') << endl;
	}


