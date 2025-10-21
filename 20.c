#include <stdio.h>
#include <math.h>

int main() {

     int n;
     printf("Enter the number : ");
     scanf("%d", &n);
     
     int digits = 0;
     if(n == 0){
       printf("0 \n");
     } else {
        while(n > 0){
          n = n / 10;
          digits++;
        }
     }
     printf("The number of the digits : %d", digits);

    return 0;
}