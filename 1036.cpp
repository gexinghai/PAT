#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	char C;
	cin >> N >> C;

	string s(N, C);
	string space(N - 2, ' ');

	cout << s << endl << endl;;

	for (int i = 0; i < (N - 3) / 2; ++i) {
		cout << C << space << C << endl << endl;
	}

	cout << s << endl;

	return 0;
}