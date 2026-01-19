/* 01-integers.c */
#include <stdio.h>
/*
%s  a string or chars
%d   integer
*/

int main(void)
{
    int x, y, result;

    // We are gonna read and scan for X value
    printf("Please input a number\n");
    scanf("%d", &x);

    // We are gonna read and scan for Y value
    printf("Now, please input another number\n");
    scanf("%d", &y);

    result = x + y;
    printf("The sum is %d\n", result);
    return 0;
}