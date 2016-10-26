# Chapter 4

## 4.1

假设 get_size 是一个没有参数并返回 int 值的函数，下列哪些定义是非法的？为什么？

>
````
unsigned buf_size = 1024;
int ia[buf_size]
````

非法，因为 buf_size 不是 const 变量

> `int ia[get_size()]`

非法，因为 get_size() 是函数调用，不是常量表达式，不能用于定义数组的维数。

> `int ia[4 * 7 - 14]`

合法

> `char st[11] = "fundamental"`

非法，因为字符数组后面会添加空字符，应该改为 `st[12]`。

## 4.2

> 下面数组的值是什么？

````
// 元素类型为 string 的数组，将各元素初始化为空字符串
string sa[10];
// 在函数体外定义的数组，各元素初始化为 0
int ia[10];
int main() {
	// 元素类型为 string 的数组，将各元素初始化为空字符串
	string sa2[10];
	// 在函数体内定义的数组，各元素未初始化，值不确定
	int ia2[10];
}
````

## 4.3

> `int ia[7] = {0, 1, 1, 2, 3, 5, 8};`

合法

> `vector<int> ivec = {0, 1, 1, 2, 3, 5, 8};`

错误，不能这样初始化 vector。

> `int ia2[] = ia1;`

错误，不能用一个数组来初始化另一个数组。

> `int ia3[] = ivec;`

错误，不能用 vector 对象来初始化数组。

## 4.5

使用 vector 的优点：

- 数组不提供 push_back 或其他方法在数组中添加新元素。
- vector 更加灵活，且可以复制和赋值等操作，更易于调试。

> C++ 11 添加了 `std::array<>` 来减少 vector 某些操作的花销，固定大小的数组可以避免堆在分配内存或被销毁时所产生的额外花销。

## 4.6

应改为：

````cpp
for (size_t ix = 0; ix < array_size; ++ix)
	ia[ix] = ix;
````

## 4.7

````cpp
const size_t array_size = 5;
int a[array_size] = {1, 2, 3, 4, 5};
int b[array_size];
for (int i = 0; i < array_size; i ++) {
	b[i] = a[i];
	cout << a[i] << endl;
	cout << b[i] << endl;
}
````

````cpp
vector<int> ivec = {1, 2, 3, 4, 5};
vector<int> avec;
for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
	avec.push_back(*iter);
	cout << *iter << endl;
}
````

## 4.8

````cpp
void isEqual(int* array1, int* array2, size_t size) {
	for (int i = 0; i < size; ++i) {
		if (array1[i] != array2[i]) {
			cout << "Not equal" << endl;
			return;
		}
	}
	cout << "Equal" << endl;
	return;
}
````

````cpp
void isEqual(vector<int> ivec, vector<int> ivec2) {
	if (ivec.size() != ivec2.size()) {
		cout << "Not Equal" << endl;
		return;
	} else if (ivec.size() == 0) {
		cout << "Vector size is 0, so these two vectors are equal.";
		return;
	} else {
		vector<int>::iterator begin;
		vector<int>::iterator begin2;
		for (begin = ivec.begin(), begin2 = ivec2.begin(); begin != ivec.end(); ++begin, ++begin2) {
			if (*begin != *begin2) {
				cout << "Not equal." << endl;
				return;
			}
		}
		cout << "Equal" << endl;
		return;
	}
}
````