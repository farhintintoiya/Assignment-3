#include <stdio.h>
#include <math.h>

int main() {

    int n = 5;
    int sum = 6;
    
    for(int i = 1; i <= n; i++){
         int j = sum - i;
         if(j > i || j == i){
         printf("%d %d \n%d %d \n", i, j, i, j);
         }
    }
               

    return 0;
}