#include <stdio.h>

int main(void)  {
    int luck = 10;
    //Access
    printf("Luck is %d\n", luck); //direct access
    //modify
    luck +=5;
    //Print the address of a variable luck
    printf("The address of luck is %p\n", &luck); //%p-prints the address
    
    //Create pointer variable ( variable that stores an address)
    //<data type>*pointer_name;

    int*luckPtr;//uninitialized pointer(DON'T DO THAT)
    
    //1 NULL pointer
    luckPtr = NULL;
    //2 assign with an address 
    luckPtr = &luck;

    //Access the data through the pointer
    //* - dereferencing operator
    printf("Dereference luckPtr %d\n", *luckPtr); //indirect access
    //Create a double variable named score
    //Create a pointer pointing to it
    double score = 15.3;
    double *score_ptr = &score;

    //Modify the score through the pointer
    *score_ptr = 20.9;
    printf("score %lf\n",score);

    return 0;
}