
#include<iostream>
#include<cmath>
#include<vector>

/**
 * @file prime.cc
 * @brief Implementation of primes and soe using vector
 *
 * @author Marco Franzon
 * @date 13/05/21
 *
 */


int is_prime(const int n){


/*!
 * @brief Determines wether a number is prime or not.
 *
 * @param n number to be tested
 * @return 0 if not prime, 1 if prime
 */

  for (int i = 2; i <= std::sqrt(n); i++){
    if ( n%i == 0 ) return 0;
  }

  return 1;
}



int main() {

	int n;

	std::cout << "insert number n: ";
	std::cin >> n;

	std::vector<int> vect, sieve(n, 1);

	int count = 0;

	for (int i=2; i<=n; i++){
		if (is_prime(i) == 1){
		      	vect.push_back(i);
			std::cout << count+1 << ":\t" << i << std::endl;
			count += 1;
		}
	}


  int j = 0;

	for (int i=2; i<std::sqrt(n); i++){
		if (sieve[i] == 1) {
			j = i * i;
			while (j<=n){
				sieve[j] = 0;
				j += i;
			}
		}
	}


	std::cout << "Sieve Of Eratosthenes: " << std::endl;

	int counter = 1;
 	for (int i = 2; i <= n; i++){
		if (sieve[i] == 1){
			std::cout << counter << ":\t"<< i << std::endl;
			counter += 1;
    		}
  	}
}
