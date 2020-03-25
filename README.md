Bonjour, es-tu prêt a apprendre comment fonctionne la console Linux ? C'est parti !

Mais avant tout, qu'est ce qu'une console de commande ?
- La console est une interface qui permet une communication entre l'homme et la machine. Pour cela, l'utilisateur peut utiliser des commandes, qui ont une syntaxe un peu particulière, afin de donner un ordre à la machine. 

- La console vous place automatiquement dans un répertoire quand vous la lancez. Par défaut, il s'agit de votre répertoire personnel et de votre dossier personnel, appelé "\~" par la machine. 

- Cependant, il s'agit d'un raccourci car votre dossier personnel est stocké différemment dans la machine. En effet, tout ce qui ce trouve sur la machine est contenu dans un enorme répertoire, que l'on appelle le reperoire racine. Celui-ci est identifié par "/" .

- Pour se déplacer donc les répertoires, on peut donc utilisé ce que l'on appelle les chemins absolus. Comme tout les fichiers et repertoire partent de "/", il suffit de mettre à la suite les noms des éléments auxquelles on souhaite accéder, séparé par un "/" .

- Par exemple, il existe un dossier "home" situé dans "/", qui comporte les répertoires personnels de tous les utilisateurs. Ainsi le reperoire "/home/test" est le répertoire personnel "\~" de l'utilisateur "test".

- Il existe aussi un autre systeme de chemin que le chemin absolu, c'est le chemin relatif ! Celui-ci permet d'appelé un fichier depuis l'endroit auquelles vous vous situez. Pour cela il suffit de noter directement sans le "/", le chemin qu'il faut parcourir pour arriver au fichier. Cela peut etre très pratique. 

- Par exemple si vous vous situez dans "/home/test" et que vous souhaitez acceder au fichier "/home/test/fichier_test", il vous suffira de taper "fichier_test". 

- Il existe aussi le raccourcis "..", qui vous permettra d'acceder au dossier parents que dans celui dans lequel vous vous situez.

- Par exemple, si vous vous situez dans le répertoire "/home/test/repertoire" et que vous souhaitez accéder au fichier "/home/test/fichier_test", vous pouvez utilisez le raccourci "../fichier_test"

- Maintenant que je vous ai dit comment accéder aux éléments de votre machine, il manque plus qu'une chose à savoir : savoir comment dire ce que nous voulons faire avec les fichiers à l'ordinateur. Pour cela, il suffit en général de noter le nom de la commande d'abord puis de rajouter ensuite et séparé d'un espace, le chemin relatif ou absolu du fichier, comme vous souhaitez.

- Il existe une commande appelé "cat" (pour concatener) qui permet d'afficher le contenu d'un fichier. Il vous mettra la réponse en dessous de votre commande

- Pour lire le contenu du fichier "/home/test/fichier_test", vous pouvez utilisez la commande
```bash
cat /home/test/fichier_test
Félicitations, vous avez lu le contenu du fichier "/home/test/fichier_test"
```

Voici les premières commandes qui pourront t'aider :

[ ] : obligatoire

( ) : optionnel

Connaître le chemin absolu du répertoire auquel on se situe :
```bash=
pwd
```

Lister les fichiers d'un répertoire :
```bash=
ls (chemin_souhaité)
```
Changer de répertoire:
```bash=
cd [chemin_souhaité]
```
Afficher le contenu d'un fichier :
```bash=
cat [nom_du_fichier]
```
Executer un script de commande :
```bash=
./[nom_du_fichier]
```
<!-- PAS ENCORE CONFIGURE
Voilà tu as tout ce qu'il faut pour commencer, il te suffit désormais de te connecter en ssh sur la vm. 
```bash=
ssh test@jlardenois.freeboxos.fr
```
tape ensuite 'yes' et le mot de passe (qui sera caché) 'test'
-->

