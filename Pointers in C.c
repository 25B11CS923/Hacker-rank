#include <stdio.h>
#include <stdlib.h>  // for abs()

void update(int *a, int *b) {
    int tempA = *a;
    int tempB = *b;

    *a = tempA + tempB;
    *b = abs(tempA - tempB);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);
    return 0;
}

