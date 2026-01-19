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

/*
This version demonstrates a safer approach to reading input, avoiding buffer overflows.
*/

/*

#include <stdio.h>

int main(void)
{
    char name[16];

    printf("What is your favourite Pokemon?\n");

    if (fgets(name, sizeof(name), stdin) != NULL)
    {
        printf("My favorite pokemon is: %s", name);
    }

    return 0;
}

*/