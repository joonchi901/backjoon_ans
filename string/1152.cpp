#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 0;
	string str;

	getline(cin, str);

	for (int i = 1; i < str.size(); i++) { // 공백은 연속되지않으므로 문자열의 첫 요소는 관계x
		if (str[i] == 32) // 공백을 만날 때마다
			count++; // count + 1
	}
	count++; // 단어 사이의 모든 공백의 수보다 단어의 수가 1 더 많으므로 count + 1

	if (str[str.size() - 1] == 32) { // 단, 맨 마지막 요소가 공백일 경우 위의 계산이 오류가 되므로
		count--; // count - 1
	}

	cout << count; // count (단어 수) 출력

	return 0;
}

// ' ' 의 아스키 코드값 32