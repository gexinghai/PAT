//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	// ����ַ���
//	string s;
//	// ��ȡ�ַ���
//	getline(cin, s);// <string> || <sstream>
//
//	/*
//	* ���ܴ���������BMW�ĵ��� - �˷�������
//	* 
//	* // ������д�д��ĸ��λ��
//	* vector<int>posOfUpper;
//	* // ��ȡ���д�д��ĸ��λ��
//	* for (int i = 0; i < s.size(); ++i) {
//	* 	if (s[i] >= 'A' && s[i] <= 'Z') {
//	* 		posOfUpper.push_back(i);
//	* 	}
//	* }
//	*/
//
//	// ������пո��λ��
//	vector<int>indexOfSpace;
//	// ��ȡ���пո��λ��
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] == ' ') {
//			indexOfSpace.push_back(i);
//		}
//	}
//
//	// ���ո���Ϊ0����ֻ��һ�����ʣ�ֱ�����
//	if (indexOfSpace.size() == 0) {
//		cout << s << endl;
//		return 0;
//	}
//
//	// ������е���
//	vector<string>words;
//	// ��ȡ���е���
//	// substr(pos, n) - ��pos��ʼ��ȡn���ַ�
//	string word;
//	word = s.substr(0, indexOfSpace[0]);
//	words.push_back(word);
//	for (int i = 0; i < indexOfSpace.size(); ++i) {
//		
//		if (i != indexOfSpace.size() - 1) {
//			word = s.substr(indexOfSpace[i] + 1, indexOfSpace[i + 1] - indexOfSpace[i] - 1);
//		}
//		else {
//			word = s.substr(indexOfSpace[i] + 1, indexOfSpace.size() - indexOfSpace[i]);
//		}
//		words.push_back(word);
//	}
//
//	// ����������е���
//	for (int i = words.size() - 1; i >= 0; --i) {
//		cout << words[i];
//		if (i != 0) {
//			cout << " ";
//		}
//	}
//	cout << endl;
//
//	return 0;
//}