/*
    The program prints the student's info in the specific format:
    
*/

#include <stdio.h>

int main(void)  {
    int courseID = 2271;
    int studentID = 10234;

    printf("Name: \t\t\t\tJohn Doe\n");
    printf("Course ID: \t\t\t%d\n", courseID);
    printf("Student ID: \t\t\t%d\n", studentID);
    printf("Student ID - Course ID is: \t%d\n", studentID - courseID);

    return 0;
}