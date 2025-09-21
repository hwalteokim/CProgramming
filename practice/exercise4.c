#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (90 < a) {
        printf("A\n");
    }
    else if (a > 80) {
        printf("B\n");
    }
    else if (70 < a) {
        printf("C\n");
    }
    else {
        printf("D\n");
    }

    return 0;
}
