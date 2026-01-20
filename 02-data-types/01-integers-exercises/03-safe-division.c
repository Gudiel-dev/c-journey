/* 03-safe-division.c */

#include <stdio.h>

int main(void)
{
    int a, b, result;

    //Numerador
    printf("Numerador:\n");
    scanf("%d", &a);

    //denominador
    printf("Denominador:\n");
    scanf("%d", &b);

    // Method "Guard Clause" 
    if (b == 0) {
        printf("Can't divide by zero\n");
        return 0;
    }
    result = a / b;
    printf("result: %d\n", result);
}

/*
Traditional method
    if( b == 0 ) {
        printf("Can't divide by zero\n");
        return 0;
    } else {
        result = a / b;
        printf("Result: %d\n", result);
    }

*/

/*
Regla de oro (guárdala)

Usa guard clauses cuando:
	•	haya un caso inválido claro
	•	quieras abortar temprano
	•	el flujo “feliz” sea lo importante

Usa if / else cuando:
	•	ambas ramas son igual de importantes
	•	quieres mostrar claramente dos caminos
*/