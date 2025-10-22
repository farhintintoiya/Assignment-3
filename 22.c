#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    

    if(n == 0){
       printf("0 \n");
    } else {
        while(n > 0){
        int digits = n % 10;
        n = n / 10;
        printf("%d", digits);
        }
    }
    

    return 0;
}