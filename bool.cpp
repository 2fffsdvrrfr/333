// 2.6 bool.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"


/*
C++�еĲ�������
C++��C���ԵĻ�������ϵͳ֮��������bool
C++�е�bool��ȡ��ֵֻ��true��false
������boolֻռ��һ���ֽڣ�
������bool����������һ�𣬿��ܻ��ռһ��bit����ȡ���ڱ�������ʵ��
true������ֵ���������ڲ���1����ʾ
false�������ֵ���������ڲ���0����ʾ
bool����ֻ��true����0����false��0������ֵ
C++���������ڸ�ֵʱ����0ֵת��Ϊtrue��0ֵת��Ϊfalse
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	bool b = true;
	printf("b = %d, sizeof(b) = %d\n", b, sizeof(b));
	b = 4;
	a = b;
	printf("a = %d, b = %d\n", a, b);
	b = -4;
	a = b;
	printf("a = %d, b = %d\n", a, b);
	a = 10;
	b = a;
	printf("a = %d, b = %d\n", a, b);
	b = 0;
	printf("b = %d\n", b);
	return 0;
}