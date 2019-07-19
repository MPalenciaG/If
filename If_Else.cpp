/*
If Else
  If(Condicion){
   accion1
 }Else{
   accion2
 }
 */
 
 #include<stdio.h>
 
 int main (){
 	int n1;
 	printf("Escriba la calificacion: ");
 	scanf("%i",&n1);
 	if(n1>6){
 		printf("El alumno aprobo");
 	}else{
 		printf("El alumno reprobo");
 	}
 	return 0;
 }
