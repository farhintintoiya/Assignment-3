#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

int n;
printf("Enter a Number :");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    printf("%d \n", 2*i-1);
}


return 0;
}

