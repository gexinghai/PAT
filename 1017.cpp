//#include <iostream>
//#include <deque>
//using namespace std;
//
//int main() {
//	string A;
//	int B;
//	int n;
//	string Q = "";
//	int R;
//
//	cin >> A >> B;
//	reverse(A.begin(), A.end());
//	n = 10 * (A[A.size() - 1] - '0') + (A[A.size() - 2] - '0');
//	A.pop_back();
//	A.pop_back();
//
//	while (n >= B) {
//		Q.push_back(n / B);
//		A.push_back(n % B + '0');
//	}
//	R = n;
//
//	cout << Q << R << endl;
//
//	return 0;
//}