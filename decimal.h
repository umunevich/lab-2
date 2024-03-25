#pragma once
#include "main.h"
namespace decimal
{
	bool to_decimal(int& s, int(&h)[3], int& n, int(&m)[5], double& num);
	bool to_decimal_h(int& num, int(&bin)[H_3]);
	bool to_decimal_m(double& num, int(&bin)[M_5]);
} // namespace decimal