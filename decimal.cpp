#include "decimal.h"
#include <iostream>
#include "main.h"

namespace decimal
{
	bool to_decimal(int& s, int(&h)[3], int& n, int(&m)[5], double& num)
	{
		num = 1;
		if (s == 1)
			num = -1;
		int i = 0;
		int H = 0; 
		to_decimal_h(H, h);
		i = H - expbias;
		double k = 0;
		to_decimal_m(k, m);
		num = num * (1. + k) * pow(2, i);
		return true;
	}

	bool to_decimal_h(int& num, int(&bin)[H_3])
	{
		for (int i = 2; i >= 0; i--)
		{
			num += bin[2 - i] * int(pow(2, i));
		}
		return true;
	}
	bool to_decimal_m(double& num, int(&bin)[M_5])
	{
		for (int i = 0; i < 5; i++)
		{
			num += double(bin[i]) * pow(2, - i - 1);
		}
		return true;
	}
} // namespace decimal