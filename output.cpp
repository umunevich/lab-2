#include <iostream>
#include "output.h"
#include "main.h"

namespace output
{
	void about_me()
	{
		std::cout << "  	Yana Utochkina\n    	K-13" << std::endl;
	}

	void variant()
	{
		std::cout << " s   h h h   n   m m m m m   " << std::endl;
	}

	void floating(int& s, int(&h)[H_3], int& n, int(&m)[M_5], std::string information, double &num)
	{
		std::cout << " " << s << "  ";
		for (int i = 0; i < H_3; i++)
		{
			std::cout << " " << h[i];
		}
		std::cout << "   " << n << "  ";
		for (int i = 0; i < M_5; i++)
		{
			std::cout << " " << m[i];
		}
		std::cout << "   " << information << " <" << num << ">\n";
	}
} // namespace output