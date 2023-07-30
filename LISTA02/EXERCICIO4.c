#include <stdio.h>

float fat(n){
    float fat;
    for(fat = 1; n > 0; n--){
    fat = fat * n;
    }

    return fat;
}

int main (){

    int n = 1, N, x = 0;
    float E = 1;
    float fatx;

    scanf("%d", &N);

    while (x < N){
    E = E + (1.0/fat(n));
    x++;
    n++;
    }
    printf("%.2f", E);



  return 0;
}