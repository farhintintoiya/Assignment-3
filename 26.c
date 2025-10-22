#include <stdio.h>
#include <math.h>

int main() {

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);
    
    int sum = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("It is a perfect number...");
    } else {
        printf("It is NOT a perfect number...");

    }

    return 0;
}