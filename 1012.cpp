//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	// 数字个数
//	int n;
//	cin >> n;
//
//	//读取n个数
//	int a[1010] = { 0 };
//	for (int i = 0; i < n; ++i) {
//		cin >> a[i];
//	}
//
//	// 存放答案
//	int ans[5] = { 0 };
//	bool emp[5] = {true, true, true, true, true};
//	int count = 0;
//	int flag = 1;
//	for (int i = 0; i < n; ++i) {
//		int mod = a[i] % 5;
//		switch (mod) {
//		case 0:
//			if (a[i] % 2 == 0) {
//				emp[0] = false;
//				ans[0] += a[i];
//			}
//			break;
//		case 1:
//			emp[1] = false;
//			ans[1] += (flag * a[i]);
//			flag = -flag;
//			break;
//		case 2:
//			emp[2] = false;
//			ans[2]++;
//			break;
//		case 3:
//			emp[3] = false;
//			ans[3] += a[i];
//			count++;
//			break;
//		case 4:
//			emp[4] = false;
//			if (ans[4] == 0) {
//				ans[4] = a[i];
//			}
//			else {
//				ans[4] = max(ans[4], a[i]);
//				break;
//			}
//		}
//	}
//
//	if (emp[0]) { cout << "N "; }
//	else { cout << ans[0] << " "; }
//
//	if (emp[1]) { cout << "N "; }
//	else { cout << ans[1] << " "; }
//	
//	if (emp[2]) { cout << "N "; }
//	else { cout << ans[2] << " "; }
//
//	if (emp[3]) { cout << "N "; }
//	else { printf("%.1lf ", ans[3] * 1.0 / count); }
//
//	if (emp[4]) { cout << "N"; }
//	else { cout << ans[4]; };
//
//	return 0;
//}