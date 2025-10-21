#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for(int i = 0; i < 200; i++){
        scanf("%d", &num);

        if(num > 0){
            positive++;
        } else if(num < 0){
            negative++;
        } else {
            zero++;
        }
    }

    printf("Number of positive values: %d\n", positive);
    printf("Number of negative values: %d\n", negative);
    printf("Number of zeros: %d\n", zero);

    return 0;
}
