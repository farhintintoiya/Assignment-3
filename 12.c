#include <stdio.h>
#include <math.h>

int main() {

    int arr[10];
    int sum = 0;
    float mean;
    
    printf("Enter the values : ");
    for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
    }
    mean = sum / 10.0;

    printf("The sum : %d \n", sum);
    printf("The mean : %f \n", mean);
    

    return 0;
}