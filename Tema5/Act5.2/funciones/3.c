// En lenguaje C escribe el prototipo de una función
// llamada Age que recibe el año de nacimiento y
// muestra la edad de una persona.

#include <stdio.h>

// PROTOTIPO DE FUNCION
int Age(int birthYear);

int main()
{
    int birthYear;
    int age;

    printf("Ingrese su año de nacimiento: ");
    scanf("%d", &birthYear);

    age = Age(birthYear);
    printf("Su edad es: %d años\n", age);

    return 0;
}

// DEFINICION DE LA FUNCION
int Age(int nacimiento)
{
    return (2025 - nacimiento);
}