#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

struct Triangle
{
    struct point A;
    struct point B;
    struct point C;
};

struct Triangle FormStruct(int, int, int, int, int, int);

float vecLen(int, int, int, int);

float findSquare(float, float, float);
float findPerimetr(float, float, float);

int main()
{
    int Ax;
    int Ay;
    int Bx;
    int By;
    int Cx;
    int Cy;

    printf("Ax = ");
    scanf("%d", &Ax);
    printf("Ay = ");
    scanf("%d", &Ay);
    printf("Bx = ");
    scanf("%d", &Bx);
    printf("By = ");
    scanf("%d", &By);
    printf("Cx = ");
    scanf("%d", &Cx);
    printf("Cy = ");
    scanf("%d", &Cy);

    struct Triangle tr = FormStruct(Ax, Ay, Bx, By, Cx, Cy);

    float AB = vecLen(tr.A.x, tr.A.y, tr.B.x, tr.B.y);
    float BC = vecLen(tr.B.x, tr.B.y, tr.C.x, tr.C.y);
    float AC = vecLen(tr.A.x, tr.A.y, tr.C.x, tr.C.y);

    printf("Perimeter of Triangle = %.2f\n",
           findPerimetr(AB, BC, AC));
    printf("Square of Triangle = %.2f\n",
           findSquare(AB, BC, AC));
    return 0;
}

float vecLen(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float findSquare(float a, float b, float c)
{
    float pp = (a + b + c) / 2; 
    return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

float findPerimetr(float a, float b, float c)
{
    return a + b + c;
}

struct Triangle FormStruct(int ax, int ay,
                           int bx, int by,
                           int cx, int cy)
{
    struct point a;
    a.x = ax;
    a.y = ay;

    struct point b;
    b.x = bx;
    b.y = by;

    struct point c;
    c.x = cx;
    c.y = cy;

    struct Triangle trio;
    trio.A = a;
    trio.B = b;
    trio.C = c;

    return trio;
};
