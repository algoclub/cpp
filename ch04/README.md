# Chapter 4

## 4.1

假设 `get_size` 是一个没有参数并返回 int 值的函数，下列哪些定义是非法的？为什么？

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
将一个数组赋给一个数组：

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

将一个 vector 赋给一个 vecotr：

````cpp
vector<int> ivec = {1, 2, 3, 4, 5};
vector<int> avec;
for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
	avec.push_back(*iter);
	cout << *iter << endl;
}
````

## 4.8

判断数组是否相等：

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

判断 vector 是否相等：
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

## 4.9

````cpp
const size_t array_size = 10;
int a[array_size];
for (int i = 0; i < array_size; i ++) {
	a[i] = i;
	cout << a[i] << endl;
}
````

## 4.10

	int *ip;
	int* ip;

第二种容易将 `int*` 理解为一种数据类型，且在连续声明多个变量时容易混淆。

## 4.11

> int* ip;

合法
 
> string s, *sp = 0;

合法

> int i; double* dp = &i;

非法，不能将 int 类型对象的地址进行初始化。

> int* ip, ip2;

合法

> const int i = 0, *p = i;

合法
 
> string *p = NULL;

合法

## 4.12

无法确定，无法知道指针指向的是否为一个有效地址，或者有效的对象。

## 4.13

`void *` 类型指针可以保存任意对象的地址。而指向 `long` 类型的指针不能使用 `int` 类型对象进行初始化。

## 4.14

````cpp
int *a = 1;
int *p = 0;
p = a; // 改变指针的值
*p = 2;// 改变指针所指对象的值
````
## 4.15

1. 引用始终指向某个对象，初始化引用如果没有指向对象是错误的。
2. 对引用赋值是修改引用指向的值，并指针可以修改它本身，或者它指向对象的值。

## 4.16

````cpp
int i = 42, j = 1024;
int *p1 = &1, *p2 = &j;
*p2 = *p1 * * p2;
*p1 *= *p1;
````

1. 初始化两个 `int` 类型对象 `i`, `j`, 它们的值分别为 `42` 和 `1024`。
2. 初始化两个指向 `int` 类型的指针，分别指向上面的 `i` 和 `j`。
3. `j` 的值为 `42 * 1024`。
4. `i` 的值为 `42 * 42`。
