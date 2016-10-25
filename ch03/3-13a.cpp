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
	
	for (vector<int>::size_type ix = 0; ix < ivec.size() - 1; ix = ix + 2) {
		if (ix % 2 == 0) {
			cout << ivec[ix] + ivec[ix+1] << "\t";
		}
	}
	
	if (ivec.size() % 2 != 0) {
		cout << endl << "The last element has not been summed."
		<< "the value is " << ivec[ivec.size() - 1] << endl;
	}
	
    return 0;
}
