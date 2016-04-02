#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,band=0, band1=0, a, b;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A= %d )\n",a);
        printf("2- Ingresar 2do operando (B= %d)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                      printf("Ingrese el primer operando: \n");
                      scanf("%d", & a);
                      band=1;
                break;
            case 2:
                      printf("Ingrese el segundo operando: \n");
                      scanf("%d", & b);
                      band1=1;
                break;
            case 3:
                     printf("La suma es %d \n",suma(a,b));
                break;
            case 4:
                     printf("La resta es %d \n",resta(a,b));

                break;
            case 5:
                     printf("La division es %.2f \n",division(a,b));
                break;
            case 6:
                     printf("La multiplicacion es %d \n",multiplicacion(a,b));

                break;
            case 7:
                     printf("El factorial es %d \n",factorial(a));
                break;
            case 8:
                     printf("La suma es %d \n",suma(a,b));
                     printf("La resta es %d \n",resta(a,b));
                     printf("La division es %.2f \n",division(a,b));
                     printf("La multiplicacion es %d \n",multiplicacion(a,b));
                     printf("El factorial es %d \n",factorial(a));
                break;
            case 9:

                seguir = 'n';
                break;
        }// fin switch

    }//fin while
    getch();
    return 0;
}
