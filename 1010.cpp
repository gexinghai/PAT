//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	// 系数 指数
//	int a, b;
//	// 答案
//	vector<int>ans;
//
//	// 读取输入
//	while (cin >> a >> b)
//	{
//		if (a && b) {
//			ans.push_back(a * b);
//			ans.push_back(b - 1);
//		}
//	}
//	
//	// 输出答案
//	if (ans.empty()) {
//		cout << "0 0" << endl;
//	}
//	else {
//		cout << ans[0];
//		for (int i = 1; i < ans.size(); ++i) {
//			cout << ' ' << ans[i];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}