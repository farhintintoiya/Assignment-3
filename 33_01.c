#include <stdio.h>
#include <math.h>

int main() {

      int r1 = 2;
      int r2 = 3;
      
      for(int i = 1; i <= r1; i++){
          for(int j = 1; j <= r2; j++){
               printf("%d %d \n", i, j);
          }
      }

    return 0;
}