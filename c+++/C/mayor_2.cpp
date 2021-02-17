//Lee 10 números enteros y devuelve el mayor
#include<stdio.h>
int main(){
	int numero[10];
	int mayor;
	int cont;
	//Leemos 10 números
	for(cont=0;cont<10;cont++){
		printf("\nNumero %d: ",cont);
		scanf("%d",&numero[cont]);	
	}
	//Los mostramos por pantalla
	printf("************");
	printf("* La lista *");
	printf("************");	
	for(cont=0;cont<10;cont++){
		printf("\nNumero %d: %d",cont,numero[cont]);

	}

	return 0;
}
		
	
		
		
		
		
		
		
	




