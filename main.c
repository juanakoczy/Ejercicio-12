//Implemente una función que reciba un string por referencia y lo invierta. Por
//ejemplo, si el string es "hola", el resultado debe ser "aloh".

#include <stdio.h>
#include <string.h>

void invertir (char *texto)//aca declaro que texto ingresa como un puntero
{
    int i,largo,mitad;
    char temp;

        largo=strlen(texto);
        mitad=largo/2;
        for (int i = 0; i < mitad; i++)//reccorre el vector hasta la  mitad
        {
            temp = texto[i];
            texto[i] = texto[largo - 1 - i];//al total le resto 1 y el lugar que ocupa
            texto[largo - 1 - i] = temp;
        }
    printf("%s\n", texto);
    }

int main() {
    char texto[100];
    printf("Ingrese un texto:\n");
    fflush(stdin);
    gets (texto);
    invertir(texto);//texto es un string no necesito otro puntero extra
    return 0;
}
