#include <stdio.h>
int main(void)  {
    int arr[10];
    arr[0] = 111;
    arr[9]= 999;
    //print the values of the first and last
    printf("first: %d; last: %d\n", arr[0], arr[9]);
    //initialize an array with a loop
    for(int i=0;i<10;i++)   {
        arr[i]=i*i;

    }
    //print the whole array
    for(int i=0; i<10; i++)  {
       printf("%d", arr[i]); 

    }
    puts("");
    return 0;
}