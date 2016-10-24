#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

//int main(int argc, const char * argv[]) {
//	string input;
//	vector<string> svec;
//
//	cout << "Please enter a sentence." << endl;
//	while (cin >> input) {
//		svec.push_back(input);
//	}
//
//	if (svec.size() == 0) {
//		cout << "There is no element in vector.";
//		return -1;
//	}
//	
//	cout << "Transformed elements from vector" << endl;
//
//	for (vector<string>::size_type i = 0; i != svec.size(); ++i) {
//		for (string::size_type index = 0; index != svec[i].size(); ++index) {
//			if (islower(svec[i][index])) {
//				svec[i][index] = toupper(svec[i][index]);
//			}
//		}
//		cout << svec[i] << " ";
//		
//		if ((i + 1) % 8 == 0) {
//			cout << endl;
//		}
//	}
//
//	return 0;
//}
