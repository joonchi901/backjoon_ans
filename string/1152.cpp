#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 0;
	string str;

	getline(cin, str);

	for (int i = 1; i < str.size(); i++) { // ������ ���ӵ��������Ƿ� ���ڿ��� ù ��Ҵ� ����x
		if (str[i] == 32) // ������ ���� ������
			count++; // count + 1
	}
	count++; // �ܾ� ������ ��� ������ ������ �ܾ��� ���� 1 �� �����Ƿ� count + 1

	if (str[str.size() - 1] == 32) { // ��, �� ������ ��Ұ� ������ ��� ���� ����� ������ �ǹǷ�
		count--; // count - 1
	}

	cout << count; // count (�ܾ� ��) ���

	return 0;
}

// ' ' �� �ƽ�Ű �ڵ尪 32