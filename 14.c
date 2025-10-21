#include <stdio.h>
#include <math.h>

int main() {

    int arr[100], large, small;
    printf("Enter the values : ");
    
    for(int i = 0; i < 100; i++){
     scanf("%d", &arr[i]);
    }
    large = arr[0];
    small = arr[0];

    for(int i = 0; i < 100; i++){
     if(large < arr[i]){
         large = arr[i];
     }
     if(small > arr[i]){
         small = arr[i];
     }
    }

    printf("The largest one : %d \n", large);
    printf("The smallest one : %d \n", small);

    return 0;
}