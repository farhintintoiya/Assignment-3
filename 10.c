#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

int n,fact=1;
printf("Enter a Number :");
scanf("%d", &n);


for(int i=1;    i<=n;   i++){
    fact=fact*i;
}
printf("fact=%d",fact);
return 0;
}

