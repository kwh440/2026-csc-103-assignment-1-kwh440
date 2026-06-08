#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {

    int math, science, english;
    int total;
    float average;
    char grade;
    int pass;

    int highest;

    int distinction = 0;

    // Get Input
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter English marks: ");
    scanf("%d", &english);

    // Calculate Total & Average
    total = math + science + english;
    average = total / 3.0;

    // Highest subject mark
    highest = math;

    if(science > highest)
        highest = science;

    if(english > highest)
        highest = english;

    // Select Grade
    if(average >= 80)
        grade = 'A';
    else if(average >= 70)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Pass or Fail
    pass = (math >= 40 && science >= 40 && english >= 40);


    if(average >= 85 && math >= 80 && science >= 80 && english >= 80) {
        distinction = 1;
    }

    // Give Output
    printf("\nTotal: %d", total);
    printf("\nAverage: %.2f", average);
    printf("\nGrade: %c", grade);

    printf("\nHighest Subject Mark: %d", highest);

    if(pass)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    if(distinction)
        printf("\nStatus: DISTINCTION");

    return 0;
}
