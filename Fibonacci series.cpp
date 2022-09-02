// Fibonacci series.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int n = 10;
	int a = 0, b = 1;
	cout << a << ", " << b << ", ";
	for (int i = 2; i < n; i++)
	{
		int nextNumber = a + b;
		cout << nextNumber << ", ";
		a = b;
		b = nextNumber;
	}
	system("pause");
    return 0;
}

