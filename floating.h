#pragma once
#include "main.h"
namespace floating
{
	const int N = 9;
	bool to_floating(int& s, int(&h)[3], int& n, int(&m)[5], double num);
	bool to_binary(int(&bin)[N], int num, int &i);
	bool to_binary_h(int(&bin)[3], int num, int& i);
	bool to_binary_m(int(&bin)[5], double num, int& i);
} //namespace floating