#include <stdio.h>
/*
    split the given 2 digit number into tens and ones
    Return 0 if the number is 2digit number and 1 otherwise
*/
int splitDigits(int n, int *tens_ptr, int*ones_ptr);



int main(void){
    int a = 15;
    puts("Enter a number");
    scanf("%d", &a);
    int tens = 0;
    int ones = 0;
    splitDigits(a,&tens, &ones);
    printf("Tens is %d, ones is %d\n", tens, ones);


    return 0;

}
int splitDigits(int n, int *tens_ptr, int *ones_ptr){
    if(n<10||n>99)  {
        puts("Not a 2digit numbers");
        return 1;

    }
    *tens_ptr = n/10;
    *ones_ptr = n%10;
    return 0;
}