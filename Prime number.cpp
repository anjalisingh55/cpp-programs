// C++ program to display first N Prime numbers
#include <bits/stdc++.h>
using namespace std;

// Function to print first N prime numbers
void print_primes_till_N(int N)
{
	// Declare the variables
	int i, j, flag;

	// Print display message
	cout << "\nPrime numbers between 1 and "
		<< N << " are:\n";

	// Traverse each number from 1 to N
	// with the help of for loop
	for (i = 1; i <= N; i++) {

		// Skip 0 and 1 as they are
		// neither prime nor composite
		if (i == 1 || i == 0)
			continue;

		// flag variable to tell
		// if i is prime or not
		flag = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		// flag = 1 means i is prime
		// and flag = 0 means i is not prime
		if (flag == 1)
			cout << i << " ";
	}
}

// Driver code
int main()
{

	int N = 100;

	print_primes_till_N(N);

	return 0;
}
