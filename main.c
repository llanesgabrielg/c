#include <stdio.h>

int main(){
    int consumoMin = 100,vencida=0,pago=0;
    int cliente,consumo,diferencia;
    float tarifa;
    printf("ingrese el numero de cliente, para salir ingrese el numero 0\n");
    scanf("%d",&cliente);
    printf("ingrese el consumo de este mes\n");
    scanf("%d",&consumo);
    printf("si la boleta esta vencida ingrese 1 - sino -0\n");
    scanf("%d",&vencida);
    printf("pago es de contado 1 - sino -0\n");
    scanf("%d",&pago);

    while (cliente > 0)
    {
        tarifa = 115; // lo que se paga hasta 100kwh
        if ( consumo > consumoMin)
        {
            diferencia = consumo - consumoMin;
            tarifa = 115 + (diferencia * 72);
            if (vencida)
            {
                tarifa = 115 + (diferencia * 100);
            }
            if (pago)
            {
               tarifa = tarifa - (tarifa * 0,05); 
               printf("pago : %f",tarifa);
            }
        }
        
        printf("el monto a pagar es %f",tarifa);
        
        printf("\ningrese nuevo cliente, num > 0 para salir");
        scanf("%d",&cliente);
    }
    
    return 0;
}