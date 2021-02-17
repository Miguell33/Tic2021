/*
Números aleatorios

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main(){
	int puntuacion;
	srand(time(0));
	//int semillita;
	//random(semillita);
	puntuacion=rand()%6+1;
	printf("%d",puntuacion);
	return 0;
}






