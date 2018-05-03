#include <stdio.h>
#include <stdlib.h>
#include "EstructuraGenerica.h"
#define CANTIDADU 100
#define CANTIDADP 1000

int main()
{
    eGenerica listadoGenerico[CANTIDADU];
    eGen_init(listadoGenerico,CANTIDADU);
    int opcion = 0;
    do
    {
        printf("1. Dar de alta un usuario\n");
        printf("2. Modificar\n");
        printf("3. Baja\n");
        printf("4. Publicar producto\n");
        printf("5. Modificar\n");
        printf("6. Cancelar\n");
        printf("7. Comprar\n");
        printf("8. Listar publicaciones de cierto usuario\n");
        printf("9. Listar publicaciones\n");
        printf("10. Listar usuarios\n");
        scanf("%d", &opcion);
        switch (opcion)
            {
                case 1:
                eGen_alta(listadoGenerico, CANTIDADU);
                break;
                case 2:
                eGen_modificacion(listadoGenerico, CANTIDADU);
                break;
                case 3:
                printf( "\n \t muestro el array... esta vacio");
                eGen_mostrarListado(listadoGenerico,CANTIDADU);
                getchar();

                printf( "\n \t muestro el array con los borrados y vacios");
                eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDADU);
                getchar();

                eGen_alta(listadoGenerico,CANTIDADU);
                eGen_alta(listadoGenerico,CANTIDADU);
                printf( "\n \t cargo dos elementos y muestro el array");
                eGen_mostrarListado(listadoGenerico,CANTIDADU);
                getchar();

                printf( "\n \t muestro el array con los borrados y vacios");
                eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDADU);
                getchar();
                default:
                    break;
            }
    }while(opcion != 0);

    return 0;
}
