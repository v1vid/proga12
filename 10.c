#include <stdio.h>

int NOD(int, int);
int NOK(int, int);

void DigitArray(int *, int);

int main()
{
    /// Ex. 1
    int x;
    scanf("%d", &x);

    int y;
    scanf("%d", &y);

    printf("NOD = %d\n", NOD(x, y));
    printf("NOK = %d\n", NOK(x, y));

    /// Ex. 2
    int v[256];
    int n;
    scanf("%d", &n);

    DigitArray(v, n);

    for (int i = 0; v[i] != -1; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}

void DigitArray(int *arr, int n)
{
    int i = 0;
    while (n > 0)
    {
        arr[i++] = n % 10;
        n /= 10;
    }
    arr[i] = -1;
}

int NOD(int a, int b)
{
    while (a && b)
    {
        if (a >= b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a | b;
}

int NOK(int a, int b)
{
    return a * b / NOD(a, b);
}
