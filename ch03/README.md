# Chapter 3

## 3.12



## [3.13a](#3-13a.cpp) [3.13b](#3-13b.cpp)

## [3.14](#3-14.cpp)

## 3.15

>     
    vector<int> ivec;
    ivec[0] = 42;

不合法，

## [3.17a](#3-17a.cpp) [3.17b](#3-17b.cpp)

## [3.18](#3-18.cpp)

## 3.22

>     // Error: Invalid operands to binary expression ('iterator(aka '__wrap_iter<int *>') and 'iterator')
>     vector<int>::iterator mid = (vi.begin() + vi.end()) / 2;

There is not an existed operator for adding two iterators together.

## 3.23

> `bitset<64> bitvec(32)`

64 位，第 5 位为 1，其他为 0

> `bitset<32> bv(1010101)`

32 位，十进制 1010101 等于 二进制 0 0000 0000 0000 1111 0110 1001 1011 0101
 
> `string bstr; cin >> bstr; bitset<8> bv(bstr);`

8 位，将输入的字符串从右至左的 8 个字符对 bv 的 0~7 位进行初始化

## [3.24](#3-24.cpp)
