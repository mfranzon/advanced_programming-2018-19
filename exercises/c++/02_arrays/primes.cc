#include <iostream>
#include <cmath>

/**
 * @file prime.cc
 * @brief Computes and prints all the prime numbers smaller or equal than 100
 *
 * @author Marco Franzon
 * @date 03/05/21
 *
 *This approach uses the prime number theorem (consideration (n/ln(n)-1) ) to approximate the number of primes.
 *It uses the number to allocate a fixed size array in which insert the values.
 *For reference: http://primes.utm.edu/howmany.shtml#pnt 
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






int* pnt_prime(const int n) {


/*!
 * @brief allocates an array large enough to
 * contain the first prime numbers up to n. It then fills the array and prints it.
 *
 * @param n upper limit for the prime-number search
 * @return pointer to the array of primes
 */

  int dim = (n*1.0)/(log(n)-1); //properties of the prime-counting funcion

  int* result{new int[dim]};

  int count = 0;
  for (int i = 2; i <= n; i++){
    if (is_prime(i) == 1) {
      result[count] = i;
      std::cout << count+1 << ":\t"<< i << std::endl;
      count += 1;
      }
  }
  
  return &result[0];
}





int main() {



  int* p_primes = pnt_prime(100);
  std::cout<<"primes[1] = "<<p_primes[1]<<std::endl;


}
