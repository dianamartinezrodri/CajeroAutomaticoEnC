//Simular una tienda con entradas y salidas de capital

#include <stdio.h>

int main(){
	
	int opc;
	float agre,reti,saldo=3000;
	
	printf("\t*****************************************\n");
	printf("\t*Este es un simulador de tienda o cajero*\n");
	printf("\t*****************************************\n");
	printf("\tSelecciona una opcion: \n");
	printf("\t1) Depositar dinero\n");
	printf("\t2) Retirar dinero\n");
	printf("\t3) Salir del cajero\n");
	printf("\tOpcion seleccionada: \n");
	scanf("%i",&opc);
	
	switch(opc){
		case 1: 
		printf("\tCuanto dinero desea depositar?");
		scanf("%f",&agre);
		saldo+=agre;
		printf("\tAhora su sado es de %.2f",saldo); 
		break;
		
		case 2: 
		printf("\tCuanto dinero desea retirar?");
		scanf("%f",&reti);
		if(reti>saldo){
			printf("\tSolo dispones de %.2f",saldo);
		}
		else {
			saldo-=reti;
			printf("\tAhora su saldo es de %.2f",saldo);
		}
		break;
		
		case 3: 
		printf("\tFue un placer atenderle. ");
		break;
	}
	
	
	
	return 0;
}
