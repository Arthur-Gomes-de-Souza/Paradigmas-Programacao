// FUNÇÃO: Resolver as expressões lógicas abaixo.
#include <stdio.h>

int main() {
    int p = 1;
    int q = 0;

    printf("!p = %d\n", !p);
    printf("!q = %d\n", !q);
    printf("p && q = %d\n", p && q);
    printf("p || q = %d\n", p || q);
    printf("(!p) && q = %d\n", (!p) && q);
    printf("(!p) || q = %d\n", (!p) || q);
    printf("p && (!q) = %d\n", p && (!q));
    printf("p || (!q) = %d\n", p || (!q));
    printf("(!p) && (!q) = %d\n", (!p) && (!q));
    printf("(!p) || (!q) = %d\n", (!p) || (!q));

    return 0;
}

