#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// *************************** SIEVE OF ERATOSTHENES ***************************

// Parameters: (Max primality number required, Sieve array)
void sieveOfEratosthenes(int n, bool sieve[]) {
	memset(sieve, true, n);
	sieve[0] = sieve[1] = false;	// 0 and 1 are not prime (base condition)
	for(int i = 2; i <= sqrt(n); ++i) {
		for(int j = 2; i*j <= n; ++j)
			sieve[i*j] = false;
	}
}

// ******************************************************

int main() {
	int n = 1000000;	// Max number for primality testing
	bool sieve[n+1];

	sieveOfEratosthenes(n, sieve);

	cout << "Prime numbers are: ";
	for(int i = 0; i <= n; ++i) {
		if(sieve[i])
			cout << i << " ";
	}

	return 0;
}