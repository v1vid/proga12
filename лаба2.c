#include <stdio.h>
#include <math.h>

float Z1(int a)
{
    return ((sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3*a) + cos(5*a)));
}

float Z2(int a)
{
    return (sin(3*a) / cos(3*a));
}

int main()
{
    ///ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
    ///printf("%.2f\n", sin(90 * M_PI / 180)); /// ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ 30 ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½, ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½

    int a;
    scanf("%d", &a);

    printf("Z1 = %.2f\n", Z1(a));
    printf("Z2 = %.2f\n", Z2(a));

    return 0;
}