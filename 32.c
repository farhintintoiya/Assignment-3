#include <stdio.h>
#include <math.h>

int fib(int);
int fib(int n){
    if(n <= 1){
        return n;
    } else{
        return fib(n - 1) + fib(n - 2);
    }
}
int main() {

     int x;
     printf("Enter the number : ");
     scanf("%d", &x);

     for(int i = 0; i < x; i++){
         printf("%d ", fib(i));
     }

    return 0;
}