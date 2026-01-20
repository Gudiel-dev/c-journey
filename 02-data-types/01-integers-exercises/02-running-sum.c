/* 02-running-sum.c */

#include <stdio.h>

int main(void)
{
    // declaring variables
    int n1, n2, n3, n4, total=0;

    //Input data
    printf("Insert #1\n");
    scanf("%d", &n1);

    //Input data
    printf("Insert #2\n");
    scanf("%d", &n2);

    //Input data
    printf("Insert #3\n");
    scanf("%d", &n3);

    //Input data
    printf("Insert #4\n");
    scanf("%d", &n4);

    //math  round 1
    total = total + n1;
    //priting out results
    printf("round 1: %d\n", total);

    //math round2
    total = total + n2;
    printf("round 2: %d\n", total);

     //math round2
    total = total + n3;
    printf("round 3: %d\n", total);

     //math round3
    total = total + n4;
    printf("round 4: %d\n", total);
    printf("Numbers added up sequentially\n");

    return 0;
}
