#include<stdio.h>
#include<string.h>

int main(){
	char nombre[30];
	printf("Escriba su nombre completo: \n");
	gets(nombre);
	if(strcmp(nombre,"Lorena Sofia Garcia Martinez")==0){
		printf("Es usted la mejor Novia del mundo");
	} else if (strcmp(nombre,"Mario Gutierrez Palencia")==0){
		printf("Es usted el hombre que mas ama a Lore en el mundo");
	} else {
		printf("No tengo nada que decirte");
	}
	return 0;
}
