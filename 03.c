#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        printf("%d ", 2*i-1);
    }

    return 0;
}