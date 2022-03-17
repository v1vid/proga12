#include <stdio.h>
int main() {
    int z1,z2;
    int a=65,b=87;
    int c,m;
    scanf("%d %d", &c, &m);
    z1 = (c>=a && c<=b ? 1 : 0);
    printf("%c %d", z1 ? 'Y':'N',(m>>24) %2 );

    return 0;
}