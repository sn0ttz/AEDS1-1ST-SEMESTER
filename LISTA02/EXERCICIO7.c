#include <stdio.h>


  int main() 
{
    int L, i;
    int fib1 = 1, fib2 = 1, prox_fib;

    scanf("%d", &L);

    printf("%d\n%d\n", fib1, fib2); 

    for (i = 2; i < L; i++) { 
        prox_fib = fib1 + fib2; 
        printf("%d\n", prox_fib);
        fib1 = fib2;
        fib2 = prox_fib;
    }

    return 0;
}
