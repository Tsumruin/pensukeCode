#include <stdio.h>
#include <math.h>

int main(void){
    int N;
    double sum = 0;
    printf("Input a natural number:"); //accept 15 digits or less
    scanf("%d", &N);
    for(int i=1; i<=N; i++){ //leibniz
        if(0 == i % 2){
            sum -= (double) 1/ (2 * i -1); 
        }
        else{
            sum += (double) 1/ (2 * i -1);
        }
    }
    sum *= 4;
    printf("%f\n", sum);
    return 0;
}