#include<stdio.h>

int main(){
	int cont,num;
	int tabla;
	printf("Introduce un numero: ");
	scanf("%d",&tabla);
	printf("****************");
	printf("* Tabla del %d *",tabla);
	printf("****************");
	for(cont=0;cont<=10;cont++){
		//I/O 
		printf("%d x %d = %d\n",tabla,cont,tabla*cont);
	}
	return 0;
}
		
	
		
		
		
		
		
		
	




