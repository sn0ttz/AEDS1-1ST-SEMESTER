#include <stdio.h>


  int main() 
{
    int L, i;
    int fib1 = 1, fib2 = 1, prox_fib;

    scanf("%d", &L);

    printf("%d\n", fib1); 

    while (fib2 <= L) 
    { 
        printf("%d\n", fib2);
        prox_fib = fib1 + fib2; 
        fib1 = fib2;
        fib2 = prox_fib;
    }
    return 0;
}
