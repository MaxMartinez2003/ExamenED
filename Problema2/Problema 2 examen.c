#include <stdio.h>
//Maximiliano Martienz Farias ExamenED
int recursiva(int);
int razon =3;
int resultado;

int main()
{
	int i;
	int numeroElementos;
	int numeroInicial=5;
	printf("Ingresa el limite de numeros que quiere saber de  la secuencia:");
	scanf("%d",&numeroElementos);  
	printf("\numPrimer limite: %d \n",numeroInicial);
	printf("\numResto de limite: ");
	
	
	for(i= 0; i<=numeroElementos; i++)
	{
		printf("%d, ",recursiva(numeroInicial));
		numeroInicial=resultado;
	}
	return 0;
}
int recursiva(int numeroInicial)
{

	if(numeroInicial>0)
	{
		return resultado=numeroInicial*razon;
	}
	else
	{
	    return 1;    
	}
}
