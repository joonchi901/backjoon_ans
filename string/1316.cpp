#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int count = 0;
	cin >> n;

	vector <int> c(n);
	vector <string> v(n); 

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i].size() > 100) return -1;

		for (int j = 0; j < v[i].size(); j++) {
			if(v[i][j] == v[i]v[j+1])
		}

		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i].find(v[i][j]) << ' ';
		}
	}
	
	

	return 0;
}