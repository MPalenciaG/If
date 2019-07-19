/*Programa de borrado de pantalla*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char tecla;
	printf(",vchvakjsfhv khafljhsadkh kjgafkhsa kjgafshvfsk kjgfaskjgasf kjgafsjhasf kjgafskhgasf kjgasfjhsaf \n kgDKUGASFKHGSFAKJ KJGSAFKJGSkhgDKKJ GdkhgDAKadjgDK \n");
	printf(",vchvakjsfhv khafljhsadkh kjgafkhsa kjgafshvfsk kjgfaskjgasf kjgafsjhasf kjgafskhgasf kjgasfjhsaf \n kgDKUGASFKHGSFAKJ KJGSAFKJGSkhgDKKJ GdkhgDAKadjgDK \n");
	printf(",vchvakjsfhv khafljhsadkh kjgafkhsa kjgafshvfsk kjgfaskjgasf kjgafsjhasf kjgafskhgasf kjgasfjhsaf \n kgDKUGASFKHGSFAKJ KJGSAFKJGSkhgDKKJ GdkhgDAKadjgDK \n");
	printf(",vchvakjsfhv khafljhsadkh kjgafkhsa kjgafshvfsk kjgfaskjgasf kjgafsjhasf kjgafskhgasf kjgasfjhsaf \n kgDKUGASFKHGSFAKJ KJGSAFKJGSkhgDKKJ GdkhgDAKadjgDK \n");
	printf(",vchvakjsfhv khafljhsadkh kjgafkhsa kjgafshvfsk kjgfaskjgasf kjgafsjhasf kjgafskhgasf kjgasfjhsaf \n kgDKUGASFKHGSFAKJ KJGSAFKJGSkhgDKKJ GdkhgDAKadjgDK \n");
	scanf("%c",&tecla);
	//Borrado
	if(tecla=='1'){
		system("cls");
		printf("Ha funcionado el limpiado de pantalla");
	} else {
		fflush(stdin);
		printf("No ha funcionado el limpiado de pantalla \n Por favor digite el numero 1\n");
		scanf("%c",&tecla);
		if(tecla=='1'){
			system("cls");
			printf("Ha funcionado el borrado");
		} else {
			printf("No funciono");
		}
	}
	
	return 0;
}
