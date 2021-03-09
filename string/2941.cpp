#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 0;
	string s;
	
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		count++;
		if (s[i] == 'c' && s[i + 1] == '=') count--;
		if (s[i] == 'c' && s[i + 1] == '-') count--;
		if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') count--;
		if (s[i] == 'd' && s[i + 1] == '-') count--;
		if (s[i] == 'l' && s[i + 1] == 'j') count--;
		if (s[i] == 'n' && s[i + 1] == 'j') count--;
		if (s[i] == 's' && s[i + 1] == '=') count--;
		if (s[i] == 'z' && s[i + 1] == '=') count--;
	}

	cout << count;

	return 0;
} //이 방법밖에 없나? 젤 간단해 보이긴함.