/*Dep9_Prog2:verificar la hora*/

#include <stdio.h>
int main()
{
    int hora, minutos, segundos;
    printf("\n Introduce las horas");
    scanf("%d", &hora);
    printf("\n Introduce los minutos");
    scanf("%d", &minutos);
    printf("\n Introduce los segundos");
    scanf("%d", &segundos);

    if( (horas>=0 && horas<=23) &&
        (minutos>=0 && minutos<=59) &&
        (segundos>=0 && segundos<=59)
        )
    {
        printf("\n El formato de hora es correcto");
    }
    else
    {
        printf("\n El formato de hra es incorrecto");
    }
    return 0;
}