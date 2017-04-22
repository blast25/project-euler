#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    
    int *num = malloc(1024 * sizeof(*num));
    int iterations = strtol(argv[1], NULL, 10) - 1;
    int i = 0,
        j = 0,
        k = 0;
    int numsize = 1;
    int overflow;
    int solution = 0;
    num[0] = 2;

    while (i < iterations) { 
        overflow = 0;

        for (j = (numsize - 1); 0 <= j; --j) { //2*2*....
            num[j] = num[j] + num[j];
            num[j] += overflow; 
            overflow = num[j] / 10;
            num[j] %= 10;
        }

        if (overflow > 0) {
            numsize++;
            for (k = numsize - 1; 1 <= k; --k) {
                num[k] = num[k-1];
            }
            num[0] = overflow;
        }
        
        i++;
    }
    
    for(k = 0; k < numsize; ++k) {
        solution += num[k];
        printf("%d", num[k]);
    }

    free(num);
    printf("\nnumsize: %d\n", numsize);
    printf("solution: %d\n", solution);
   
} 
