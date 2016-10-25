#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	int i;
	vector<int> ivec;
	
	cout << "Please enter a set of numbers: " << endl;
	while (cin >> i) {
		ivec.push_back(i);
	}
	
	if (ivec.size() == 0) {
		cout << "The vector is empty." << endl;
		return -1;
	}
	
	vector<int>::size_type left, right;

	for (left = 0, right = ivec.size() - 1; left < right; left ++, right --) {
		cout << ivec[left] + ivec[right] << endl;
	}
	
	if (left == right) {
		cout << "The middle element is " << ivec[left] << endl;
	}
	
	return 0;
}
