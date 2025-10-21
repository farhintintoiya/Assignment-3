#include <stdio.h>
#include <math.h>

int odd(int);
int odd(int n){
    if(n == 1){
      return 1;
    } else {
        return odd(n-2)+n;
    }
}
int main() {

      int x;
      printf("Enter the number : ");
      scanf("%d", &x);
      if(x % 2 == 0){
           x = x - 1;
      }
      
      printf("The sum : %d", odd(x));

    return 0;
}