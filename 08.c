#include <stdio.h>
#include <math.h>

int fact(int);
int fact(int n){
    if(n == 0 || n == 1){
         return 1;
    } else {
        return fact(n-1)*n;
    }
}
int main() {

        int x;
        printf("Enter the number : ");
        scanf("%d", &x);  
        
        printf("The factorial : %d", fact(x));

    return 0;
}