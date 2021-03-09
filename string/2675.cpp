#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int t;
	int r;
	int cnt = 0;
	char str[1000][21] = {0,};
	char P[1000][161] = {0,};

	cin >> t;

	if ((t < 1) || (t > 1000)) return -1;
	for (int i = 0; i < t; i++) {
		cin >> r >> str[i];
		if ((r < 1) || (r > 8)) return -1;
		for (int j = 0; j < strlen(str[i]); j++) {
			for (int k = 0; k < r; k++) {
				P[i][cnt] = str[i][j];
				cnt++;
			}
		}
		cnt = 0;
	}
	for (int i = 0; i < t; i++) {
		cout << P[i] << endl;
	}

	return 0;
}