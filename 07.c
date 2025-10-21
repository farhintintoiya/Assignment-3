#include <stdio.h>
#include <math.h>

int even(int);
int even(int n){
    if(n < 2){
        return 0;
    } else {
        return even(n-2)+n;
    }
}

int main() {

    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    if(x % 2 != 0){
         x = x - 1;
    }
    printf("The sum of %d numbers is : %d", x, even(x));
               

    return 0;
}