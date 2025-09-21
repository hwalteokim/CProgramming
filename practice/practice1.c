#include <stdio.h>

void one_three(void);
void two(void);
void three(void);

int main(void) {
    printf("starting now:\n");
    one_three();      // one_three()를 호출하면 → one, two, three까지 출력
    printf("done!\n");
    return 0;
}

void one_three(void) {
    printf("one\n");  // one_three가 먼저 "one" 출력
    two();            // 그 다음 "two"
    three();          // 그 다음 "three"
}

void two(void) {
    printf("two\n");
}

void three(void) {
    printf("three\n");
}
