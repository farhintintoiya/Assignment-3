#include <stdio.h>
#include <math.h>

int main() {

    int n, temp, digits=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    temp = n;

    while(temp != 0){
          digits++;
          temp = temp / 10;
    }
    int sum = 0;
    temp = n;
    while(temp != 0){
        int digit = temp % 10;
        sum = sum + pow(digit , digits);
        temp = temp / 10;
    }
    if(sum == n){
        printf("The number is an Armstrong Number...");
    } else{
        printf("The number is NOT an Armstrong Number...");
    }

    return 0;
}