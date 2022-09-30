#include<stdio.h>

void imprimir(int,int);
int main(){
	
	int inicio,fin;
	printf("Ingresar el numero 5\n");
	scanf("%d",&inicio);
	printf("\nIngresar el numero final 500\n");
	scanf("%d",&fin);
	
	imprimir(inicio, fin);
	return 0;
	
}
void imprimir(int ini, int fin){
	if(ini < fin){
		printf("\n%d ",ini);
		ini=ini*3;
		imprimir(ini,fin);
	}

 }