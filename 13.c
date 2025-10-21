#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    float mean;
    
    printf("Enter %d values : ", n);
    for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
    }
    mean = (float)sum / n;

    printf("The sum : %d \n", sum);
    printf("The mean : %.2f \n", mean);
    

    return 0;
}