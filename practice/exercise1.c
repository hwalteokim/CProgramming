#include <stdio.h>
void evenodds(int a);

int main(void) {
    int n;
    scanf("%d", &n);
    evenodds(n);   // 결과를 출력하는 함수 실행
    return 0;
}

void evenodds(int a) {
    if (a % 2 == 0) {
        printf("짝수입니다.\n");
    } else {
        printf("홀수입니다.\n");
    }
}
