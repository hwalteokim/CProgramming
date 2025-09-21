#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if (a < 0) {
        printf("it can't be negative\n");
        return 0;
    }
    int hour = a / 3600;
    a = a % 3600;
    int minutes = a / 60;
    a = a % 60;
    printf("%d 시간 %d 분 %d 초\n", hour, minutes, a);
    return 0;
}
