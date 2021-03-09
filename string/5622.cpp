#include <iostream>
#include <string>

using namespace std;

int main() {
	int s = 0;
	string str;

	cin >> str;

	if (str.size() < 2 && str.size() > 15) return -1;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] <= 'C') s += 3;
		else if (str[i] <= 'F') s += 4;
		else if (str[i] <= 'I') s += 5;
		else if (str[i] <= 'L') s += 6;
		else if (str[i] <= 'O') s += 7;
		else if (str[i] <= 'S') s += 8;
		else if (str[i] <= 'V') s += 9;
		else if (str[i] <= 'Z') s += 10;
	}

	cout << s;
}

// A~Z 65~90