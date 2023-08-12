#include<iostream>
using namespace std;
//sizeof 释义：运算符、大小
int main() {

	// 整型：short(2字节) < int(4) <= long (windows, 4)(linux, 8) <= long long(8)
		//可以利用sizeof 求出数据类型占用内存大小
		//语法：sizeof(数据类型/变量）

		short num1 = 10;
	cout << " short占用内存空间为：" << sizeof(num1) << endl;






	system("pause");

	return 0;
}