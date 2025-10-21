#include <stdio.h>
#include <math.h>

int main() {

    int sum = 0;

    for(int i = 1; i <= 100; i++){
     if(i % 3 == 0){
          sum += i;
     }
    }    
    
    printf("The sum : %d", sum);

    return 0;
}