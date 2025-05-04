<img src="git_utils/banner.png" width= 100%>

<br>

---

<br>

<details>
<summary>FRENCH VERSION</summary>

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

</details>

<br>

---

<br>

<details>
<summary>ENGLISH VERSION</summary>

## Introduction

The second C++ module at 42 school deepens the understanding of memory management, member pointers, references, and the switch statement. This module aims to equip students with the skills necessary to effectively manage memory in their C++ applications, using both dynamic allocation and direct manipulation of memory addresses. References and member pointers are explored to provide increased flexibility in accessing and modifying data. Additionally, the use of the switch statement is addressed in the final exercise to improve decision-making in code. Together, these topics form a crucial step toward a deeper mastery of C++, paving the way for the development of more sophisticated and high-performance software.

<br>

## Exercise 00 - BraiiiiiiinnnzzzZ

<details>
	<summary>Show/Hide</summary>

We develop a Zombie class with a private attribute ```name``` of type ```string```. The class includes a member function ```announce()``` for the zombie to introduce itself by saying ```<Name>: BraiiiiiiinnnzzzZ...```. We also implement two functions: ```Zombie* newZombie(std::string name)```, which creates, names, and returns a ```zombie```; and ```void randomChump(std::string name)```, which creates and names a ```zombie``` that then announces itself. The goal is to decide when to allocate zombies on the heap or the stack. Zombies are destroyed when no longer needed, displaying a debug message upon destruction.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex00)

### My Implementation

Definition of the ```Zombie``` Class: The class has a ```name``` attribute for the zombie's name, a constructor to initialize this name and announce the zombie's creation, a destructor to announce its destruction, and an ```announce``` method for the zombie to introduce itself.

Creating Zombies on the Heap and Stack: In ```main```, one zombie is created directly on the stack with its name, while another is created on the heap via the ```newZombie``` function, which returns a pointer to a new ```Zombie``` object.

Function ```randomChump```: This function creates a temporary zombie on the heap, makes it announce itself, and then immediately destroys it, illustrating dynamic memory management.

Zombie Announcements: Created zombies announce their presence using their ```announce``` method.

Memory Management: The program illustrates the difference between automatic memory management for stack objects and the need to manually free memory for heap-allocated objects using ```delete```.

This exercise highlights object-oriented programming concepts, memory management, and the interaction between objects and functions in C++.

</details>

<br>

## Exercise 01 - Moar brainz!

<details>
	<summary>Show/Hide</summary>

We reuse the Zombie class from Exercise 00 to create a horde of zombies. The function ```Zombie* zombieHorde(int N, std::string name)``` is introduced to allocate and initialize ```N``` ```Zombie``` objects in a single allocation, assigning each zombie the name provided as a parameter. The function returns a pointer to the first zombie in the horde. Tests are implemented to ensure the proper functioning of ```zombieHorde()```, notably by calling the ```announce()``` method on each zombie. Properly freeing the memory allocated to the horde is crucial to avoid memory leaks.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex01)

### My Implementation

(See the implementation of Exercise 00)

The program starts by defining a ```zombieHorde``` function, which dynamically allocates an array of zombies and initializes each zombie with a unique name. The ```isEmptyLine``` function checks if the user's input is empty or contains only whitespace. The ```askInput``` function prompts the user to provide the number of zombies and a base name, handling invalid or empty inputs. In the ```main``` function, the user is prompted for this information, after which the zombie horde is created. Each zombie in the horde then announces itself using the ```announce``` method. Finally, the memory allocated to the horde is freed with ```delete[]```, preventing memory leaks.

</details>

<br>

## Exercise 02 - HI THIS IS BRAIN

<details>
	<summary>Show/Hide</summary>

In this third exercise, we simply learn to understand, assimilate, and use references and pointers by displaying the memory addresses and the values contained at these addresses of predefined variables.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex02)

### My Implementation

We create a string ```stringBAS```, then initialize a pointer ```stringPTR``` to point to this string and a reference ```stringREF``` to directly refer to it. The program displays the memory addresses of the string, the pointer, and the reference to show how they relate to the original object. Then, it prints the value of the string using the string itself, the dereferenced pointer, and the reference, demonstrating that the pointer and reference access the same object as the original variable.

</details>

<br>

## Exercise 03 - Unnecessary violence

<details>
	<summary>Show/Hide</summary>

This exercise delves deeper into the relationship between objects in C++. The ```Weapon``` class encapsulates the concept of a weapon with a specific type, accessible and modifiable through its public methods. The ```HumanA``` and ```HumanB``` classes represent two types of humans with a name and the ability to possess a weapon. The key distinction between them lies in weapon management: ```HumanA``` receives its weapon at construction, ensuring it is always armed, while ```HumanB``` can be assigned a weapon after creation, allowing flexibility in its armament. The ```attack``` method in each class illustrates how these characters use their weapon, highlighting the differences in dependency management between the two.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex03)

### My Implementation

We start with the definition of the ```Weapon``` class, which manages the weapon type through a ```type``` attribute. The ```getType``` and ```setType``` methods allow retrieving and modifying this type, respectively. The ```HumanA``` class is designed to always be armed, taking a reference to a ```Weapon``` in its constructor and having an ```attack``` method to simulate an attack. ```HumanB``` differs in its ability to be initially unarmed, with a ```setWeapon``` method to assign a weapon post-construction and an ```attack``` method to attack. The program demonstrates the use of these classes by creating and manipulating instances of ```HumanA``` and ```HumanB``` and dynamically changing the weapon type.

</details>

<br>

## Exercise 04 - Sed is for losers

<details>
	<summary>Show/Hide</summary>

The "Sed is for losers" exercise requires creating a program that takes three parameters: a filename and two strings, ```s1``` and ```s2```. The goal is to open the specified file, copy its content into a new file named ```<filename>.replace```, replacing every occurrence of ```s1``` with ```s2```. The use of C file manipulation functions is prohibited, as is the use of ```std::string::replace```. All other member functions of ```std::string``` are allowed. The program must handle unexpected inputs and errors.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex04)

### My Implementation

The program implements a multi-step process to replace all occurrences of one string with another in a file. After initializing the necessary objects and validating the input arguments, the program opens the source file to read its content. Using a data stream, it traverses the file content, replacing occurrences of the specified string with the desired new string. This operation is performed without using the ```replace``` method of ```std::string```, as per the requirements. Once the replacement process is complete, the new content is written to an output file named ```<filename>.replace```. The program also ensures error handling, such as issues with file opening or invalid arguments, and cleans up allocated resources before terminating.

</details>

<br>

## Exercise 05 - Harl 2.0

<details>
	<summary>Show/Hide</summary>

This exercise requires creating a ```Harl``` class that, based on the message level passed as a parameter (```DEBUG```, ```INFO```, ```WARNING```, ```ERROR```), calls one of the four corresponding member functions displaying specific complaints. The goal is to use pointers to member functions to dynamically call the appropriate function without resorting to a series of ```if/else``` conditions. This allows automating Harl's responses based on the severity level of the situation, encouraging advanced C++ programming practices.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex05)

### My Implementation

My implementation consists of a ```Harl``` class that uses pointers to member functions to call specific methods based on a message level passed as an argument. The ```Harl``` class includes four methods (```debug```, ```info```, ```warning```, ```error```) corresponding to different complaint levels. The ```complain``` method determines which function to call based on the provided ```level``` argument, allowing ```Harl``` to dynamically emit complaints. If no matching level is found, a generic message is displayed. This approach demonstrates the effective use of member function pointers to condition an object's behavior.

</details>

<br>

## Exercise 06 - Harl Filter (bonus)

<details>
	<summary>Show/Hide</summary>

The exercise aims to implement a system that filters Harl's messages according to different severity levels. The program must accept a log level as a parameter and display all messages of that level and higher levels. For example, if the "```WARNING```" level is selected, the program should display the "```WARNING```" and "```ERROR```" messages. This exercise encourages the use of, or even introduces, the ```switch``` statement to efficiently handle the selection of messages to display based on the specified log level.

[Link here](https://github.com/aceyzz/CPP01/tree/main/ex06)

### My Implementation

The implementation of ```Harl::complain``` filters Harl's complaints based on a specified severity level. The method first maps each complaint level (```DEBUG```, ```INFO```, ```WARNING```, ```ERROR```) to a corresponding function in the ```funcPtr``` array. Then, it determines the index of the complaint level specified by the user. Using a ```switch``` on this index, the method executes all complaint functions of that level and higher levels, displaying the messages in a filtered manner. If the specified level is not recognized, a generic message is displayed.

</details>

<br>

</details>