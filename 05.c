#include <stdio.h>
#include <math.h>

int sum(int);
int sum(int n){
    if(n == 1){
      return 1;
    } else {
        return sum(n-1) + n;
    }
}
int main() {

      int x;
      printf("Enter the number : ");
      scanf("%d", &x);
      
      printf("The sum : %d", sum(x));

    return 0;
}