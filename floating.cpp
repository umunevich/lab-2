#include "floating.h"
#include <iostream>
#include "main.h"
namespace floating
{
	bool to_floating(int& s, int(&h)[3], int& n, int(&m)[5], double num)
	{
		s = 0;
		if (num < 0)
			s = 1;                              // + or -
		num = abs(num);
		int num_int = int(num);
		int num_int_bi[N]{};
		int i = 0;

		to_binary(num_int_bi, num_int, i);
		n = num_int_bi[0];                      //bin n
		int index_next_of_int_bi = i;
		int index_end_of_int_bi = i - 1;
		int H = i + expbias;

		to_binary_h(h, H, i);         //bit h

		double num_double = num - num_int;
		int m_double[5] = {};
		to_binary_m(m_double, num_double, i);

		for (i = 0; i < 5 && index_end_of_int_bi >= 0; i++, index_end_of_int_bi--)
		{
			m[i] = num_int_bi[i + 1];
		}
		i = 0;
		for (index_next_of_int_bi; index_next_of_int_bi < 4 && i < 4; index_next_of_int_bi++, i++)
		{
			m[index_next_of_int_bi] = m_double[i];
		}
		return true;
	}

	bool to_binary(int(&bin)[N], int num, int &i)
	{
		int nib[N] = {};
		i = 0;
		for (i; i < N && num != 0; i++)
		{
			nib[i] = num % 2;
			num /= 2;
		}
		i--;
		int t = i;
		for (int j = 0; j < N && t >= 0; t--, j++)
		{
			bin[j] = nib[t];
		}
		return true;
	}

	bool to_binary_h(int(&bin)[3], int num, int& i)
	{
		int nib[3] = {0, 0, 0};
		i = 0;
		for (i; i < 3 && num != 0; i++)
		{
			nib[i] = num % 2;
			num /= 2;
		}
		i--;
		int t = 2;
		for (int j = 0; j < 3 && t >= 0; t--, j++)
		{
			bin[j] = nib[t];
		}
		return true;
	}

	bool to_binary_m(int(&bin)[5], double num, int& i)
	{
		for (i = 0; i < 5; i++)
		{
			bin[i] = int(num * 2);
			num = num * 2 - floor(num * 2);
		}
		return true;
	}
} //namespace floating