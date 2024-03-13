<img src="utils/2.png" width= 100%>

---

## Introduction

Le deuxième module de C++ à l'école 42, approfondit la compréhension de la gestion de la mémoire, des pointeurs vers les membres, des références et de l'instruction switch. Ce module vise à équiper les étudiants avec les compétences nécessaires pour gérer efficacement la mémoire dans leurs applications C++, en utilisant à la fois l'allocation dynamique et la manipulation directe des adresses mémoire. Les références et les pointeurs vers les membres sont explorés pour offrir une flexibilité accrue dans l'accès et la modification des données. En outre, l'utilisation de l'instruction switch est abordée dans le dernier exercice pour améliorer la prise de décision dans le code. Ensemble, ces sujets constituent une étape cruciale vers une maîtrise plus approfondie du C++, ouvrant la voie au développement de logiciels plus sophistiqués et performants.

<br>

## Exercice 00 - BraiiiiiiinnnzzzZ

<details>
  <summary>Afficher/Masquer</summary>

Nous développons une classe Zombie avec un attribut privé ```name``` de type ```string```. La classe inclut une fonction membre ```announce()``` pour que le zombie se présente en disant ```<Nom>: BraiiiiiiinnnzzzZ...```. Nous implémentons également deux fonctions :``` Zombie* newZombie(std::string name)```, qui crée, nomme et retourne un ```zombie``` ; et ```void randomChump(std::string name)```, qui crée et nomme un ```zombie``` qui s'annonce ensuite. L'objectif est de décider quand allouer les zombies sur la heap ou la stack. Les zombies sont détruits quand ils ne sont plus nécessaires, affichant un message de débogage à la destruction.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex00)

### Mon implémentation

Définition de la Classe ```Zombie``` : La classe possède un attribut name pour le nom du zombie, un constructeur pour initialiser ce nom et annoncer la création du zombie, un destructeur pour annoncer sa destruction, et une méthode announce pour que le zombie puisse s'annoncer.

Création de Zombies sur la heap et la stack : Dans ```main```, un zombie est créé directement sur la pile avec son nom, tandis qu'un autre est créé sur le tas via la fonction ```newZombie```, qui retourne un pointeur vers un nouvel objet ```Zombie```.

Fonction ```randomChump``` : Cette fonction crée un zombie temporaire sur le tas, le fait s'annoncer, puis le détruit immédiatement, illustrant une gestion dynamique de la mémoire.

Annonce des Zombies : Les zombies créés annoncent leur présence en utilisant leur méthode ```announce```.

Gestion de la Mémoire : Le programme illustre la différence entre la gestion automatique de la mémoire pour les objets sur la pile et la nécessité de libérer manuellement la mémoire pour les objets alloués sur le tas avec delete.

Cet exercice met en lumière les concepts de la programmation orientée objet, la gestion de la mémoire, et l'interaction entre objets et fonctions en C++.

</details>

<br>

## Exercice 01 - Moar brainz!

<details>
  <summary>Afficher/Masquer</summary>

Nous réutilisons la classe Zombie de l'exercice 00 pour créer une horde de zombies. La fonction ```Zombie* zombieHorde(int N, std::string name)``` est introduite pour allouer et initialiser ```N``` objets ```Zombie``` en une seule allocation, assignant à chaque zombie le nom fourni en paramètre. La fonction retourne un pointeur vers le premier zombie de la horde. Des tests sont mis en place pour s'assurer du bon fonctionnement de ```zombieHorde()```, notamment en appelant la méthode ```announce()``` sur chaque zombie. Il est crucial de libérer correctement la mémoire allouée à la horde pour éviter les fuites de mémoire.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex01)

### Mon implémentation

(voir l'implémentation de l'exercice 00)

Le programme commence par définir une fonction ```zombieHorde```, qui alloue dynamiquement un tableau de zombies et initialise chaque zombie avec un nom unique. La fonction ```isEmptyLine``` vérifie si l'entrée de l'utilisateur est vide ou ne contient que des espaces blancs. La fonction ```askInput``` demande à l'utilisateur de fournir le nombre de zombies et un nom de base, en gérant les entrées invalides ou vides. Dans la fonction ```main```, l'utilisateur est invité à entrer ces informations, après quoi la horde de zombies est créée. Chaque zombie de la horde s'annonce ensuite grâce à la méthode ```announce```. Finalement, la mémoire allouée à la horde est libérée avec ```delete[]```, évitant ainsi les fuites de mémoire.

</details>

<br>

## Exercice 02 - HI THIS IS BRAIN

<details>
  <summary>Afficher/Masquer</summary>

Dans cet 3ème exercice, nous apprenons simplement à comprendre/assimiler et à utiliser les références et les pointeurs en affichant les adresses mémoires et les valeurs contenues à ces adresses de variables prédéfinie.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex02)

### Mon implémentation

On crée une chaîne de caractères ```stringBAS```, puis on initialise un pointeur ```stringPTR``` pour pointer vers cette chaîne et une référence ```stringREF``` pour y référer directement. Le programme affiche les adresses mémoire de la chaîne, du pointeur, et de la référence pour montrer comment ils se rapportent à l'objet original. Ensuite, il imprime la valeur de la chaîne en utilisant directement la chaîne, le pointeur déréférencé, et la référence, démontrant que le pointeur et la référence accèdent au même objet que la variable originale.

</details>

<br>

## Exercice 03 -  Unnecessary violence

<details>
  <summary>Afficher/Masquer</summary>

Cet exercice approfondit la relation entre objets en C++. La classe ```Weapon``` encapsule le concept d'une arme avec un type spécifique, accessible et modifiable par ses méthodes publiques. Les classes ```HumanA``` et ```HumanB``` représentent deux types d'humains ayant un nom et pouvant posséder une arme. La distinction clé entre eux réside dans la gestion de l'arme : ```HumanA``` reçoit son arme à la construction, garantissant qu'il est toujours armé, tandis que ```HumanB``` peut se voir attribuer une arme après sa création, permettant une flexibilité dans son armement. La méthode ```attack``` dans chaque classe illustre comment ces personnages utilisent leur arme, soulignant les différences dans la gestion des dépendances entre les deux.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex03)

### Mon implémentation

On débute avec la définition de la classe Weapon, qui gère le type d'arme via un attribut ```type```. Les méthodes ```getType``` et ```setType``` permettent respectivement de récupérer et modifier ce type. La classe ```HumanA``` est conçue pour être toujours armée, prenant une référence à ```Weapon``` dans son constructeur et disposant d'une méthode ```attack``` pour simuler une attaque. ```HumanB``` diffère par sa capacité à être ou non équipé d'une arme initialement, avec ```setWeapon``` pour associer une arme post-construction et ```attack``` pour attaquer. Le programme  démontre l'utilisation de ces classes, en créant et manipulant des instances de ```HumanA``` et ```HumanB```, et en changeant dynamiquement le type d'arme.

</details>

<br>

## Exercice 04 - Sed is for losers

<details>
  <summary>Afficher/Masquer</summary>

L'exercice "Sed is for losers" demande de créer un programme prenant trois paramètres : un nom de fichier et deux chaînes de caractères, s1 et s2. Le but est d'ouvrir le fichier spécifié, copier son contenu dans un nouveau fichier nommé ```<filename>.replace```, en remplaçant chaque occurrence de ```s1``` par ```s2```. L'utilisation des fonctions de manipulation de fichiers C est interdite, tout comme l'utilisation de ```std::string::replace```. Toutes les autres fonctions membre de ```std::string``` sont autorisées. Le programme doit gérer les entrées inattendues et les erreurs.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex04)

### Mon implémentation

Le programme implémente un processus en plusieurs étapes pour remplacer toutes les occurrences d'une chaîne par une autre dans un fichier. Après avoir initialisé les objets nécessaires et vérifié les arguments d'entrée, le programme ouvre le fichier source pour lire son contenu. En utilisant un flux de données, il parcourt le contenu du fichier, remplaçant les occurrences de la chaîne spécifiée par la nouvelle chaîne désirée. Cette opération s'effectue sans utiliser la méthode ```replace``` de ```std::string```, conformément aux consignes. Une fois le processus de remplacement terminé, le nouveau contenu est écrit dans un fichier de sortie portant le nom ```<filename>.replace```. Le programme assure également la gestion des erreurs, comme les problèmes d'ouverture de fichier ou les arguments invalides, et nettoie les ressources allouées avant de se terminer.

</details>

<br>

## Exercice 05 - Harl 2.0

<details>
  <summary>Afficher/Masquer</summary>

Cet exercice demande de créer une classe ```Harl``` qui, basée sur le niveau de message passé en paramètre (```DEBUG```, ```INFO```, ```WARNING```, ```ERROR```), appelle l'une des quatre fonctions membres correspondantes affichant des plaintes spécifiques. L'objectif est d'utiliser des pointeurs vers des fonctions membres pour appeler dynamiquement la fonction appropriée sans recourir à une série de conditions ```if/else```. Cela permet d'automatiser les réponses d'Harl en fonction du niveau de gravité de la situation, en encourageant une pratique avancée de programmation C++.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex05)

### Mon implémentation

Mon implémentation consiste en une classe ```Harl``` qui utilise des pointeurs vers des fonctions membres pour appeler des méthodes spécifiques basées sur un niveau de message passé en argument. La classe ```Harl``` comprend quatre méthodes (```debug```, ```info```, ```warning```, ```error```) correspondant à différents niveaux de plaintes. La méthode ```complain``` détermine quelle fonction appeler en fonction de l'argument ```level``` fourni, permettant à ```Harl``` d'émettre des plaintes de manière dynamique. Si aucun niveau correspondant n'est trouvé, un message générique est affiché. Cette approche démontre l'utilisation efficace des pointeurs de fonctions membres pour conditionner le comportement d'un objet.

<br>

## Exercice 06 - Harl Filter (bonus)

L'exercice vise à mettre en place un système permettant de filtrer les messages émis par Harl selon différents niveaux de gravité. Le programme doit accepter un niveau de log en paramètre et afficher tous les messages de ce niveau et des niveaux supérieurs. Par exemple, si le niveau "```WARNING```" est sélectionné, le programme doit afficher les messages "```WARNING```" et "```ERROR```". Cet exercice encourage à utiliser, voire à découvrir, l'instruction ```switch``` pour gérer efficacement la sélection des messages à afficher en fonction du niveau de log spécifié.

[Lien ici](https://github.com/aceyzz/CPP01/tree/main/ex06)

### Mon implémentation 

L'implémentation de ```Harl::complain``` filtre les plaintes de ```Harl``` basées sur un niveau de gravité spécifié. La méthode mappe d'abord chaque niveau de plainte (```DEBUG```, ```INFO```, ```WARNING```, ```ERROR```) à une fonction correspondante dans le tableau ```funcPtr```. Ensuite, elle détermine l'index du niveau de plainte spécifié par l'utilisateur. Utilisant un ```switch``` sur cet index, la méthode exécute toutes les fonctions de plainte de ce niveau et des niveaux supérieurs, affichant ainsi les messages de manière filtrée. Si le niveau spécifié n'est pas reconnu, un message générique est affiché.

</details>

<br>

