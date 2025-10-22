#include <stdio.h>
#include <string.h>

int main() {

    char num[100];
    
    printf("Enter the number : ");
    scanf("%s", num);

    int len = strlen(num);

    for(int i = 0; i < len/2; i++){
       if(num[i] != num[len - i - 1]){
        printf("It is NOT a palindrome number...");
        return 0;    
       }
    }
    printf("It is a palindrome number...");
          

    return 0;
}