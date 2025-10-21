#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int digits = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    if(n == 0){
    printf("0 \n");
    } else {
        printf("The digits in reversed numbers is : ");
    }
    while(n > 0){
       int digit = n % 10;
       printf("%d ", digit);
       n = n / 10;
       
    }
   
    
    
    
    return 0;
}