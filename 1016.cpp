//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	long A, B;
//	int DA, DB;
//	int countA = 0;
//	int countB = 0;
//	int PA = 0;
//	int PB = 0;
//	cin >> A >> DA >> B >> DB;
//	while (A)
//	{
//		if (A % 10 == DA) {
//			countA++;
//		}
//		A /= 10;
//	}
//	while (B)
//	{
//		if (B % 10 == DB) {
//			countB++;
//		}
//		B /= 10;
//	}
//	
//	for (int i = 0; i < countA; ++i) {
//		PA += pow(10, i);
//	}
//	PA *= DA;
//
//	for (int i = 0; i < countB; ++i) {
//		PB += pow(10, i);
//	}
//	PB *= DB;
//
//	cout << PA + PB << endl;
//
//	return 0;
//}