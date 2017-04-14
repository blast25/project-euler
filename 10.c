#include <stdio.h>
#include <math.h>
#include <time.h>

typedef int bool;
#define true 1
#define false 0

bool isPrime(long num);

int main() {
    clock_t begin = clock();
    long long sum = 2;
    long number = 3;

    while (number < 2000000) {
        if (isPrime(number)) {
            sum += number;
        }
        number += 2;
    }
    printf("%lld\n", sum);
    clock_t end = clock();
    float z = (end - begin)/CLOCKS_PER_SEC;
    printf("%f", z);
}

int isPrime(long num) {
    
    int i;

    for (i = 2; i <= sqrt(num);i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

//Solution 142913828922
