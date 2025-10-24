#include <stdio.h>
#include <math.h>

int main() {

    int r1 = 2;
    int r2 = 2;
    int r3 = 2;
    
    for(int i = 1; i <= r1; i++){
        for(int j = 1; j <= r2; j++){
            for(int k = 1; k <= r3; k++){

                printf("%d %d %d\n", i, j, k);
            }

        }

    }

    return 0;
}