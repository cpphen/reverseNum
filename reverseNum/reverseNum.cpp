#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Solution {
public:
	int reverse(int x) {
		if (x > INT_MAX || x < INT_MIN)
		{
			return 0;
		}

		int sign = 1;
		if (x < 0)
		{
			sign = -1;
			x = x * sign;
		}

		int reversed = 0;
		int pop = 0;
		while (x > 0)
		{
			pop = x % 10;
			reversed = reversed * 10 + pop;
			x /= 10;
		}
		return reversed * sign;
	}
};

int main()
{
	signed int num = 321;
	Solution s;
	s.reverse(num);
}