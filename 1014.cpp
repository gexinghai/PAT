//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// �����ַ���
//string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//
//// ������ڸ�ʽ
//bool weekCheck(char c) {
//	if (c >= 'A' && c <= 'G') {
//		return true;
//	}
//	return false;
//}
//
//// ���Сʱ��ʽ
//bool hourCheck(char c) {
//	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'N')) {
//		return true;
//	}
//	return false;
//}
//
//// �����Ӹ�ʽ
//bool minuteCheck(char c) {
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	// ����4���ַ���
//	string a[4];
//	for (int i = 0; i < 4; ++i) {
//		cin >> a[i];
//	}
//
//	// �洢���ں�Сʱ
//	vector<char>v;
//
//	// ��ȡ���ں�Сʱ
//	for (int i = 0; i < min(a[0].size(), a[1].size()); ++i) {
//		if ((a[0][i] == a[1][i]) && weekCheck(a[0][i]) && v.size() == 0) {
//			v.push_back(a[0][i]);
//			continue;
//		}
//		if ((a[0][i] == a[1][i]) && hourCheck(a[0][i]) && v.size() == 1) {
//			v.push_back(a[0][i]);
//		}
//	}
//
//	// �洢����
//	int minu = 0;
//
//	// ��ȡ����
//	for (int i = 0; i < min(a[2].size(), a[3].size()); ++i) {
//		if ((a[2][i] == a[3][i]) && minuteCheck(a[2][i])) {
//			minu = i;
//		}
//	}
//
//	// ����
//	//cout << v[0] << " " << v[1] << " " << minu;
//
//	// �洢��
//	string ans = "";
//
//	ans += day[v[0] - 'A'];
//
//	ans += " ";
//
//	if (v[1] >= '0' && v[1] <= '9') {
//		ans += '0';
//		ans += v[1];
//	}
//	else {
//		ans += to_string(v[1] - 'A' + 10);
//	}
//
//	ans += ":";
//
//	if (minu >= 0 && minu <= 9) {
//		ans += "0";
//		ans += to_string(minu);
//	}
//	else {
//		ans += to_string(minu);
//	}
//
//	cout << ans;
//
//	return 0;
//}