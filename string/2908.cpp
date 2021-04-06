#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string a, b;
	int a_int, b_int;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	a_int = stoi(a);
	b_int = stoi(b);

	if (a_int < b_int) cout << b_int;
	else cout << a_int;

	return 0;
}