// Copyright Matt Smith - 2021

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 1; i < 1000; ++i)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	std::cout << "The sum of the natural numbers that are multiples of 3 or 5, and less than 1000 is: " << sum << std::endl;
}
