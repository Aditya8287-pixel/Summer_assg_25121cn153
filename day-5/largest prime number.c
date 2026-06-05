#include <stdio.h>
#include <stdbool.h>


bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; 

    
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long limit;

    printf("Enter the upper limit to find the largest prime number: ");
    if (scanf("%lld", &limit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }


    long long largestPrime = -1;
    for (long long i = limit; i >= 2; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break; 
        }
    }

    if (largestPrime != -1) {
        printf("The largest prime number up to %lld is: %lld\n", limit, largestPrime);
    } else {
        printf("No prime numbers found in the given range.\n");
    }

    return 0;
}