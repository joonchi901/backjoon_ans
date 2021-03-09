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

	for (int i = 0; i < str.size(); i++) { // 대문자 변환
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	for (int i = 'A'; i <= 'Z'; i++) { // 문자열에서 알파벳의 개수를 카운트하여 alp_count배열에 저장
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == i) {
				count++;
			}
		}
		alp_count[i-65] = count;
		count = 0;
	}

	for (int i = 0; i < 26; i++) { // alp_count 배열에서 최대값 탐색
		if (max < alp_count[i]) {
			max = alp_count[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) { // alp_count 배열에서 동일한 최대값 유무 탐색
		if (max == alp_count[i]) {
			count++;	
		}
	}
	
	if (count > 1) cout << "?"; // 최대값이 동일한 요소가 있다면 ? 출력
	else cout << (char)(index + 65); // 없다면 해당 요소에 65를 더하여 문자열로 변환하여 출력

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
		str[i] = toupper(str[i]); // 대문자로 변환
		arr[alphabet.find(str[i])]++; // 입력받은 문자열의 알파벳을 찾을 때마다 arr배열의 값을 1씩 증가
	}

	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (max == arr[j]) { // 최대값이 배열값과 같으면 ?를 출력하도록 index 값 변경
			index = 26;
			continue; // 단, 모든 배열값과 비교를 거침
		}
		if (max < arr[j]) { // 최대값에 저장된 값이 배열값보다 작으면
			max = arr[j]; // 최대값에 현재 배열값을 저장
			index = j; // 현재 배열값의 인덱스를 index에 저장
		}
	}

	cout << alphabet[index]; // 정의된 알파벳 문자열에서 index값을 출력

	return 0;
} // 더 나은 풀이 */