#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//memory allocation
int devuelve_longitud(char *pletra){
	int longitud=0;
	int cont=0;
	while(*(pletra+cont)!='\0'){
	    cont++;	
	}
	longitud=cont;
	return(longitud);
	
	
}
int main(){
	char *lista[3];
	int cont;
	char aux[20];

	for(cont=0;cont<3;cont++){
		printf("\npalabra %d: ",cont);
		scanf("%s",aux);
		printf("\n longitud = %d",devuelve_longitud(aux));
		//lista[cont]=(char *) malloc(devuelve_longitud(lista+cont));
		//strcpy(lista[cont],aux);//(destino,origen)
		
	}
	//MOSTRAR LISTA
	printf("\n*************************************");
	printf("\n*     FABULOSA LISTA DE PALABRAS    *");
	printf("\n*************************************");
	for(cont=0;cont<3;cont++){
	    printf("\n %d .- %s",cont,*(lista+cont));
	}	

	
	return 0;
}
