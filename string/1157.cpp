#include <iostream>
#include <string>

using namespace std;

int main() {
	int alp_count[26] = { 0, };
	int count = 0;
	int index = 0;
	int max = alp_count[0];
	string str;
	
	cin >> str;

	if (str.size() > 1000000)
		return -1;

	for (int i = 0; i < str.size(); i++) { // �빮�� ��ȯ
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	for (int i = 'A'; i <= 'Z'; i++) { // ���ڿ����� ���ĺ��� ������ ī��Ʈ�Ͽ� alp_count�迭�� ����
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == i) {
				count++;
			}
		}
		alp_count[i-65] = count;
		count = 0;
	}

	for (int i = 0; i < 26; i++) { // alp_count �迭���� �ִ밪 Ž��
		if (max < alp_count[i]) {
			max = alp_count[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) { // alp_count �迭���� ������ �ִ밪 ���� Ž��
		if (max == alp_count[i]) {
			count++;	
		}
	}
	
	if (count > 1) cout << "?"; // �ִ밪�� ������ ��Ұ� �ִٸ� ? ���
	else cout << (char)(index + 65); // ���ٸ� �ش� ��ҿ� 65�� ���Ͽ� ���ڿ��� ��ȯ�Ͽ� ���

	return 0;
}

// A~Z 65~90 / a~z 97~122

/*#include <iostream>
#include <string>

using namespace std;

int main() {
	int max = 0, index = 0, arr[26] = { 0, };
	string str;
	const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	
	cin >> str;

	for (int i = 0; i < str.length(); i++) { 
		str[i] = toupper(str[i]); // �빮�ڷ� ��ȯ
		arr[alphabet.find(str[i])]++; // �Է¹��� ���ڿ��� ���ĺ��� ã�� ������ arr�迭�� ���� 1�� ����
	}

	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (max == arr[j]) { // �ִ밪�� �迭���� ������ ?�� ����ϵ��� index �� ����
			index = 26;
			continue; // ��, ��� �迭���� �񱳸� ��ħ
		}
		if (max < arr[j]) { // �ִ밪�� ����� ���� �迭������ ������
			max = arr[j]; // �ִ밪�� ���� �迭���� ����
			index = j; // ���� �迭���� �ε����� index�� ����
		}
	}

	cout << alphabet[index]; // ���ǵ� ���ĺ� ���ڿ����� index���� ���

	return 0;
} // �� ���� Ǯ�� */