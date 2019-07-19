/* If else if

  if(condicion)
    accion1
  else
    if(condicion)
      accion 2
	else
	  accion3
*/

#include<stdio.h>

int main(){
	int n1,n2;
	printf("escriba dos numeros\n");
	scanf("%i %i",&n1,&n2);
	if(n1>n2){
		printf("El numero %i es mayor que %i",n1,n2);
	} else {
		if(n2>n1){
			printf("El numero %i es mayor que %i",n2,n1);
		 } else {
			printf("Los dos numeros son iguales");
		}
	}
	return 0;
}		  
