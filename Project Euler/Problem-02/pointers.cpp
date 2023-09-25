#include <stdio.h>
#include<cmath>

void update(int *a,int *b) {
    int x;
    x = *a - *b;
    *a = *a + *b;
    x = abs(x);
    *b = x;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
