#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	vector<int> ivec;
	int input;
	
	cout << "Please enter inputs" << endl;
	while (cin >> input) {
		ivec.push_back(input);
	}
	
	if (ivec.size() == 0) {
		cout << "There is no element" << endl;
		return -1;
	}
	
	vector<int>::iterator left;
	vector<int>::iterator right;
	for (left = ivec.begin(), right = ivec.end() - 1; left < right; ++left, --right) {
		cout << *left + *right << endl;
	}
	
	if (left == right) {
		cout << "The middle number is " << *left << endl;
	}
	
	return 0;
}
