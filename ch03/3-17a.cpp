#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	int input;
	vector<int> ivec;
	
	cout << "Please enter a set of numbers: " << endl;
	while (cin >> input) {
		ivec.push_back(input);
	}
	
	if (ivec.size() == 0) {
		cout << "The vector is empty." << endl;
		return -1;
	}
	
	vector<int>::size_type cnt = 0;
	for (vector<int>::iterator iter = ivec.begin(); iter < ivec.end() - 1; iter = iter + 2) {
		cout << *iter + *(iter + 1) << endl;
		cnt++;
		if (cnt % 6 == 0) {
			cout << endl;
		}
	}
	
	if (ivec.size() % 2 != 0) {
		cout << "The last element is not been summed: " << *(ivec.end() - 1) << endl;
	}
	
	return 0;
}
