#include <stdio.h>
int evenodds (int a);

int main(void) {
    int a;
    scanf("%d", &a);
    int result;
    result = evenodds(a);
    printf("result = %d\n", result);
    return 0;
}

int evenodds (int a) {
    if (a % 2 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}
