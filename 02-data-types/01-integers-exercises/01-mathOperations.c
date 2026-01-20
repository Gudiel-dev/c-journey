/* sumOperations.c */

#include <stdio.h>

int main(void)
{
int x, y, sum, mult, sub;
//------- Reading data imput --------
// First  number
printf("Insert number 1\n");
scanf("%d", &x);
// Second number
printf("Insert number 2\n");
scanf("%d", &y);

//------- Math operations --------
sum = x + y;
sub = x - y;
mult = x * y;
//  suma
printf("Adition: %d\n",sum);
//  resta
printf("Substraction: %d\n", sub);
// multiplication
printf("Multiplication: %d\n", mult);


return 0;
}