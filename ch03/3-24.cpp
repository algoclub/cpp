#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, const char * argv[]) {
	
	bitset<32> bv;
	const unsigned int array_size = 7;
	int a[array_size] = {1, 2, 3, 5, 8, 13, 21};
	for (int i = 0; i < array_size; ++i) {
		int index = a[i];
		bv.set(index);
		cout << bv << endl;
	}
	cout << endl;
	return 0;
}
