#include<stdio.h>

int main () {
    
    long long start = 13,
              end = 1000000,
              bterm = 0,
              terms,
              copy;
     
    while(start < end) {
        
        copy = start;
        terms = 1;

        while (copy != 1) {
            copy = copy % 2 == 0 ? copy / 2 : 3*copy + 1;
            terms++;
        }
        if(bterm < terms) {
            bterm = terms;
            printf("%10lld%10lld\n", start, bterm);
        }
        start++;
    }
    //faster calculation time by using already known collatz sequences
    return(0);
}

