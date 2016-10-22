#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	int i;
	vector<int> ivec;
	
	cout << "请输入一组数字" << endl;
	while (cin >> i) {
		ivec.push_back(i);
	}
	
	for (vector<int>::size_type ix = 0; ix < ivec.size() - 1; ix = ix + 2) {
		if (ix % 2 == 0) {
			cout << ivec[ix] + ivec[ix+1] << "\t";
		}
	}
	
	if (ivec.size() % 2 != 0) {
		cout << endl << "The last element is not been summed"
		<< "the value is " << ivec[ivec.size() - 1] << endl;
	}
	
    return 0;
}
