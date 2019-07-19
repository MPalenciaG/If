/* Sentencia if
  
  if(condicion)
     accion
     
*/

//Prueba de divisibilidad
#include<stdio.h>

int main (){
	//Declarar variables
	int n1,n2;
	//Solicitar información
	printf("Escriba dos numeros enteros \n");
	scanf("%i %i",&n1,&n2);
	//Variable If
	if(n1%n2==0){
		printf("El numero %i es divisible entre el numero %i",n1,n2);
	}
	//Final
	return 0;
}
