#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("Bienvenue!\n");
	printf("Tu as 5 secondes pour eteindre l'ordinateur avant que j'y mettes un virus...\n");
	sleep(5);
	
	printf("Trop tard!\n");
	
	system("mkdir ../../VIRUS");
	system("touch ../../VIRUS/ATTENTION");
	system("echo \"AH AH AH AH! Tu n'as peur de rien toi!\" > ../../VIRUS/ATTENTION" );
	
	printf("Quelque chose c'est passé dans ton répertoire personnel...\n");
}
