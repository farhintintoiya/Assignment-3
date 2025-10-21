#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n); 
    
    
    
    int sum = 0;
     if(n == 0){
       printf("0 \n");
     } else {
        while(n > 0){
          int digit = n % 10;
          sum += digit;
          n = n / 10;
        }
     }
     printf("The sum of the digits is : %d", sum);


    return 0;
}