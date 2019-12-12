#include <stdio.h>
#include <math.h>

int main(void){
    int N;
    double sum = 0;
    printf("Input a natural number:"); //accept 15 digits or less
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        sum += (double)1 / i / i; //Basel
    }
    sum *= 6;
    sum = sqrt(sum);
    printf("%f\n", sum);
    return 0;
}