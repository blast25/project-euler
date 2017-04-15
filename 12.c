#include<stdio.h>
#include<math.h>

typedef int bool;
#define true 1
#define false 0

bool isPrime(long long num);

int main() {
    
    long long num = 1;
    int anum = 2;
    long long m = 1;
    int divisor = 0;
    
    while(divisor <= 500) {
        
       if (num % m == 0) 
            divisor++;
        if (!divisor > 1)//kill primes
            m = num;
 
        if (m == num) {
            printf("%lld %d\n", num, divisor);
            num = num + anum++;
            m = 1;
            divisor = 0; 

        } else {
            m++;
        }        
    }
    printf("%lld", num);
}
     
int isPrime(long long num) {

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
