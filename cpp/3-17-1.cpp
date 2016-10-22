//
//  3-17.cpp
//  cpp
//
//  Created by Wong Zigii on 10/22/16.
//  Copyright © 2016 ZigiiWong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	int input;
	vector<int> ivec;
	
	cout << "Please enter elements of this vector: " << endl;
	while (cin >> input) {
		ivec.push_back(input);
	}
	
	if (ivec.size() == 0) {
		cout << "There is no element in vector." << endl;
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