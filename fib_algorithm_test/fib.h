#ifndef FIB_H
#define FIB_H
#include <vector>

unsigned int fib1(unsigned int n)
{
	if (n <= 1) return n;
	return (fib1(n - 1) + fib1(n - 2));
}

unsigned int fib2(unsigned int n)
{
	if (n <= 1) return n;
	std::vector<int> arr(n + 1);
	arr[1] = 1;
	for (unsigned int i = 2; i <= n; ++i)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr[n];
}

#endif