/**
 * @file sieve.cc
 * @brief Implements the Sieve of Eratosthenes to compute prime numbers.
 *
 * Computes and prints the prime numbers less or equal than
 * a given integer n though an implementation of the Sieve of Eratosthenes.
 * The algorithm is optimized by enumerating the multiples
 * of each prime i starting from i*i.
 *
 * @author Marco Franzon
 * @date 13/05/21
 */


#include <iostream>
#include <cmath>

void SOE(int n)
{
  /*!
   * @brief Implementation of Sieve of Eratosthenes
   *
   * @param n last number to check starting from 2
   * @return none
   */

    int* prime{new int[n+1]};
    for (int i = 0; i <= n; i++) {
      prime[i] = 1;
    }

    int j = 0;
    for (int i=2; i<std::sqrt(n); i++)
    {
        if (prime[i] == 1)
        {
          j = i*i;
          while (j<=n){
            prime[j] = 0; // all multiples of i are set to FALSE
            j = j + i;
          }
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          std::cout << p << " ";
}


int main()
{
    int n;
    std::cout << "insert an integer: n = ";
    std::cin >> n;

    std::cout << "Following are the prime numbers smaller "
         << "than or equal to " << n << std::endl;
    SOE(n);
    return 0;
}
