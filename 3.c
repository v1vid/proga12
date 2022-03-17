#include <stdio.h>
#include <conio.h>

int main() {
    short b;
    int a;
    //1
    scanf ("%hx", &b);
    printf ("hex %hx\n", b);

    //2
    printf ("oct %o\n", b);

    //3
    printf ("shift = %hx\n", b >> 4);

    //4
    printf ("neg = %hx\n", ~b);

    //5
    scanf ("%hx", &a);
    printf ("xor = %hx\n", a^b);

    return 0;
}
