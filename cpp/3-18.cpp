#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	
	vector<int>ivec(10, 5);
	
	cout << "For each element in vector, Multiple 2" << endl;
	for (vector<int>::iterator iter = ivec.begin(); iter < ivec.end() - 1; ++iter) {
		*iter = *iter * 2;
		cout << *iter << endl;
	}
}
