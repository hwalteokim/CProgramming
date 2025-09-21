#include <stdio.h>

int main(void) {
    int 철수의키;
    int 철수의몸무게;
    int 영희의키;
    int 영희의몸무게;

    scanf("%d %d", &철수의키, &철수의몸무게);
    scanf("%d %d", &영희의키, &영희의몸무게);

    printf("%d\n", 철수의키 > 영희의키 || 철수의몸무게 < 영희의몸무게);

    return 0;
}
