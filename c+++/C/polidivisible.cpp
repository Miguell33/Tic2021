//Función que recibe un número entero y devuelve si es divisible para
//2, 3, 5 y 7
#include<stdio.h>
int esPoliDivisible(int num){
	int cont=0;
	int respuesta=0;
	if(num%2==0) cont++;
	if(num%3==0) cont++;
	if(num%5==0) cont++;
	if(num%7==0) cont++;
	if(cont==4) respuesta=1;	
	return(respuesta);
}
int main(){
	int num;
	printf("Introduce un numero:");
	scanf("%d",&num);
	if(esPoliDivisible(num)){
	  printf("Es polidivisible");
	}
	else{
	  printf("No es divisible polidivisible");
	}
	
	return 0;
}
