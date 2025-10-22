#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int times = 0;
    for(int i = 1; i <= n; i++){
       if(n % i == 0){
            times++;
       }
    }
    if(times == 2){
        printf("It is a prime number...");
    } else {
        printf("It is NOT a prime number...");

    }

    return 0;
}