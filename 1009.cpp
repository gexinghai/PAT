//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	// 存放字符串
//	string s;
//	// 读取字符串
//	getline(cin, s);// <string> || <sstream>
//
//	/*
//	* 可能存在类似于BMW的单词 - 此法不可行
//	* 
//	* // 存放所有大写字母的位置
//	* vector<int>posOfUpper;
//	* // 获取所有大写字母的位置
//	* for (int i = 0; i < s.size(); ++i) {
//	* 	if (s[i] >= 'A' && s[i] <= 'Z') {
//	* 		posOfUpper.push_back(i);
//	* 	}
//	* }
//	*/
//
//	// 存放所有空格的位置
//	vector<int>indexOfSpace;
//	// 获取所有空格的位置
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] == ' ') {
//			indexOfSpace.push_back(i);
//		}
//	}
//
//	// 若空格数为0，则只有一个单词，直接输出
//	if (indexOfSpace.size() == 0) {
//		cout << s << endl;
//		return 0;
//	}
//
//	// 存放所有单词
//	vector<string>words;
//	// 获取所有单词
//	// substr(pos, n) - 从pos开始截取n个字符
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
//	// 倒着输出所有单词
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