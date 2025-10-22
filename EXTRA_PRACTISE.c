#include <stdio.h>
#include <math.h>
#include <string.h>
   // TO FIND THE NUMBERS OF DIGIT IN A GIVEN NUMBER 
int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int counts = 0;
    if(n == 0){
       printf("1 \n");
    } else {
        while(n != 0){
             n = n / 10;
             counts++;
        }
    }
    printf("%d", counts);
   
    return 0;
}