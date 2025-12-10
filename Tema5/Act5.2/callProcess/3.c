// 3.​ En lenguaje C escribe una línea de código para hacer una llamada al
// procedimiento llamado ZodiacSign que reciba el dia y mes de nacimiento y
// decirle al usuario su signo zodiacal

#include <stdio.h>;

void ZodiacSign(int day, int month);

int main()
{
    int day = 24;
    int month = 9;

    // LLAMADA AL PROCEDIMIENTO
    ZodiacSign(day, month);
    return 0;
}

void ZodiacSign(int day, int month)
{
    switch (month)
    {
    case 1: // Enero
        if (day <= 19)
            printf("Capricornio\n");
        else
            printf("Acuario\n");
        break;
    case 2: // Febrero
        if (day <= 18)
            printf("Acuario\n");
        else
            printf("Piscis\n");
        break;
    case 3: // Marzo
        if (day <= 20)
            printf("Piscis\n");
        else
            printf("Aries\n");
        break;
    case 4: // Abril
        if (day <= 19)
            printf("Aries\n");
        else
            printf("Tauro\n");
        break;
    case 5: // Mayo
        if (day <= 20)
            printf("Tauro\n");
        else
            printf("Géminis\n");
        break;
    case 6: // Junio
        if (day <= 20)
            printf("Géminis\n");
        else
            printf("Cáncer\n");
        break;
    case 7: // Julio
        if (day <= 22)
            printf("Cáncer\n");
        else
            printf("Leo\n");
        break;
    case 8: // Agosto
        if (day <= 22)
            printf("Leo\n");
        else
            printf("Virgo\n");
        break;
    case 9: // Septiembre
        if (day <= 22)
            printf("Virgo\n");
        else
            printf("Libra\n");
        break;
    case 10: // Octubre
        if (day <= 22)
            printf("Libra\n");
        else
            printf("Escorpio\n");
        break;
    case 11: // Noviembre
        if (day <= 21)
            printf("Escorpio\n");
        else
            printf("Sagitario\n");
        break;
    case 12: // Diciembre
        if (day <= 21)
            printf("Sagitario\n");
        else
            printf("Capricornio\n");
        break;
    }
}
