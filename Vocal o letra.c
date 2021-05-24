/*Dep9_Prog4: Verificar si es vacal o letra*/

#include <stdio.h>
int main()
{
    char letra;
    printf("\n Introduce una letra");
    scanf("%c", &letra);

    if( letra == 'a' ​|| letra == 'A'
        letra == 'e'​ ​|| letra == 'E'
        letra == 'i' ​|| letra == 'I'
        letra == 'o' ​|| letra == 'O'
        letra == 'u' ​|| letra == 'U'
        )
    {
        printf("\n ES UNA VOCAL")
    }
    else
    {
        printf("Vn NO ES VOCAL")
    }
    return 0
}