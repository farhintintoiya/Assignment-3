#include <stdio.h>
#include <math.h>

int main(){

    int n, times;
    int counts = 0;
    for(int n = 2; n <= 500; n++){
         times = 0;

         for(int i = 1; i <= n; i++){
               if(n % i == 0){
                   times++;
               }
         }
         if(times == 2){
            counts++;
         }
    }
    printf("%d", counts);


    return 0;
}