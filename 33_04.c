#include <stdio.h>
#include <math.h>

int main() {

    int r1 = 5;
    int r2 = 2;
    
    for(int i = r1; i >= 3; i--){
       for(int j = 1; j <= r2; j++){
           printf("%d %d \n", i, j);

       }
    }

    return 0;
}