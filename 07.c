#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

int n;
printf("Enter a Number :");
scanf("%d", &n);


int sum =   0;
for(int i = 1;  i   <=  n;  i++){
        sum += i;

}

printf("the sum of the first %d natural numbers is %d", n,  sum);

return 0;
}


