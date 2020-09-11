#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, t;
    printf("in put : a,b,c\n");
    scanf_s("%d%d%d", &a, &b, &c);
    if (b > a)
    {
        t = a;
        a = b;
        b = t;
    }
    if (c > a)
    {
        t = a;
        a = c;
        c = t;
    }
    if (a < b + c)
    {

    }
    else
    {
        printf("is not triangle\n");
        return 0;
    }
    if ((a * a) == (b * b) + (c * c))
    {
        printf("right triangle\n");
    }
    else
    {
        if ((a * a) > b * b + c * c)
        {
            printf("obtuse triangle\n");
        }
        else
        {
            printf("acute-angled triangle\n");
        }
    }
    if (a == b && b == c)
    {
        printf("equilateral\n");
    }
    else
    {
        if (a == b || b == c || a == c)
        {
            printf("isosceles triangle\n");
        }
        else
        {
            printf("scalene triangle\n");
        }

    }

    return 0;
}
