//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// 星期字符串
//string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//
//// 检查星期格式
//bool weekCheck(char c) {
//	if (c >= 'A' && c <= 'G') {
//		return true;
//	}
//	return false;
//}
//
//// 检查小时格式
//bool hourCheck(char c) {
//	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'N')) {
//		return true;
//	}
//	return false;
//}
//
//// 检查分钟格式
//bool minuteCheck(char c) {
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	// 输入4个字符串
//	string a[4];
//	for (int i = 0; i < 4; ++i) {
//		cin >> a[i];
//	}
//
//	// 存储星期和小时
//	vector<char>v;
//
//	// 获取星期和小时
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
//	// 存储分钟
//	int minu = 0;
//
//	// 获取分钟
//	for (int i = 0; i < min(a[2].size(), a[3].size()); ++i) {
//		if ((a[2][i] == a[3][i]) && minuteCheck(a[2][i])) {
//			minu = i;
//		}
//	}
//
//	// 测试
//	//cout << v[0] << " " << v[1] << " " << minu;
//
//	// 存储答案
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