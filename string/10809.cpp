#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	cin >> str;

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j <= str.size(); j++) {
			if (str[j] == i)
				break;
			count++;
		}
		if (count == (str.size() + 1)) cout << "-1" << " ";
		else cout << count << " ";
		count = 0;
	}

	return 0;
}
//�迭 ���� Ž���ϸ� Ʋ��, ���ڿ��� ���̸�ŭ��.

/*#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < alphabet.length(); i++)
		cout << (int)s.find(alphabet[i]) << " ";
	return 0;
}*/ // �� ���� Ǯ��