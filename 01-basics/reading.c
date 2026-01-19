/* reading */ 

#include <stdio.h>

int main()
{
    char name[16];

    printf("What is your favourite Pokemon?\n");
    scanf("%s", name);

    printf("My favorite pokemon is: %s\n", name);
    return 0;
}
