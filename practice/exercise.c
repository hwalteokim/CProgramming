#include <stdio.h>
char grade(int a); //declaration

int main(void)  {   //main함수 안에 char result라는 변수를 만들어줘야되. 그래야 printf에 결과값을 %c로 할수 있
    int a;
    scanf("%d",&a);
    char result;
    result = grade(a);
    printf("당신의 등급은 %c 입니다.\n", result);
}
char grade(int a)   {
    if(a>=90)   {
        return 'A';
    }
    else if(a>=80)  {
        return 'B';
    }
    else if(a>=70)  {
        return 'C';
    }
    else {
        return 'D';
    }
    }



