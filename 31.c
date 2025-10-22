#include <stdio.h>
#include <math.h>

int main() {

      int num,sqr,temp;
      
      printf("Enter the number : ");
      scanf("%d", &num);

      sqr = num * num;

      temp = num;

      while(temp >0){
         if(temp % 10 != sqr % 10){
            printf("%d is NOT a automorphic number...", num);
            return 0;
         }
         temp = temp / 10;
         sqr = sqr / 10;
      }
            printf("%d is a automorphic number...", num);



    return 0;
}