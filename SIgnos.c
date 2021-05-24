/*Dep9_Prog5: \erificar a que elemento (Fuego, Aire, Agua) corresponde un signo del zodiaco */

#include <stdio.h>
int main()

{
    int signo;
    printf("\n                  Signos del sodiaco             \n\n");
    printf("1.-Aries");
    printf("\n 2.-Tauro");
    printf("\n 3.-Géminis");
    printf("\n 4.-Cáncer");
    printf("\n 5.-Leo");
    printf("\n 6.-Virgo");
    printf("\n 7.-Libra");
    printf("\n 8.-Escorpion");
    printf("\n 9.-Sagitario");
    printf("\n 10.-Capricornio");
    printf("\n 11.-Acuario");
    printf("\n 11.-Pcis ");

    printf("\n Escribe el numero que sea tu signo ");
    scanf("%d", &signo);

    switch(signo)
    {
        case 1:
        case 5:
        case 9:
            sprintf("\n Tu elemento es el FUEGO");
            break;
        case 2:
        case 6:
        case 10:
            sprintf("\n Tu elemento es TIERRA");
            break;
        case 3:
        case 7:
        case 1:
            sprintf("\n Tu elemento es Aire");
            break;
        case 4:
        case 8:
        case 12:
            sprintf("\n Tu elemento es Agua");
            break;
        default:
            printf("E numero no corresponde a un signo");

    }
    return 0;
}