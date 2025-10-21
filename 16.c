#include <stdio.h>
#include <math.h>

int main() {

   char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M/F): \n");

    for(int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex);  
        if(sex == 'M' || sex == 'm') {
            boys++;
        } else if(sex == 'F' || sex == 'f') {
            girls++;
        } else {
            printf("Invalid input! Please enter M or F only.\n");
            i--; 
        }
    }

    printf("\nTotal boys: %d\n", boys);
    printf("Total girls: %d\n", girls);       

    return 0;
}
