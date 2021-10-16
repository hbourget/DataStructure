
# DataStructure

*Le but de se projet et de se familiariser avec les différents types de structure de données.*

**Sommaire** :

1. Explication des types de structures de données
2. Installation de CUnit
3. Générer la documentation Doxygen

**On distingue 4 types** :

- Pile (Stack)
- File (Queue)
- Liste (Array List)
- Tas (Heap)

## Les différents types de structures

### La pile
Une pile (aussi appelé _stack_) fonctionne sur le principe du **LIFO** (Last In First Out).
C'est à dire que la dernière valeur qui est entrées dans la pile sera la première à en sortir.
- Opérations fondamentales : 
→ push : empilement de données 
→ pop : récupération des données 

- Opération secondaire : 
→ is_empty : état de la pile 
→ size : nombre de données sur la pile 
→ peek : récupération de données sans désempiler 
→ dup : duplique le sommet de la pile 
→ swap : échange les deux éléments au sommet

### La file
Les files (Queue, **FIFO**) Structure de données basée sur le principe du « Premier entré, premier sorti » (ou **FIFO** pour First In, First Out) 
- Opérations fondamentales : 
→ enqueue: ajout de données 
→ dequeue : récupération des données 

- Opération secondaire : 
→ is_empty : état de la pile 
→ size : nombre de données sur la pile 
→ peek : récupération de données sans désempiler

### La liste
Une liste est un conteneur d'éléments, où chaque élément contient la donnée, ainsi que d'autres informations permettant la récupération des données au sein de la liste. La nature (les types) de ces informations caractérise un type différent de liste. 

On peut distinguer, de manière générale, deux types de liste : 

→ **Listes contiguës** : la liste est représentée par un tableau. Ce n’est pas toujours une bonne solution en pratique, mais nous allons le faire ici, dans l’objectif d’illustrer la dissociation entre un type abstrait et son implémentation. 

→ **Listes chaînées** : les différents éléments de la liste sont créés au fur et à mesure des besoins (implémentation dynamique)

### Le tas
Le tas est une structure de données de type arbre qui permet de retrouver directement l'élément que l'on veut traiter en priorité.
Pour utiliser un tas, les clés sont ordonnées selon la propriété de tas : la clé d'un nœud parent a une plus haute priorité que les clés de ses enfants. La "priorité" signifie ici que les clés des enfants sont, soit toutes inférieures, soit toutes supérieures, suivant que le tas est ordonné pour avoir en racine la clé maximale (max heap) ou minimale (min heap). Une fois traitée, la donnée de plus haute priorité peut ou non être enlevée, ce qui modifie le tas.

##  Installation de CUnit
Sur Linux, il peut être nécessaire d'effectuer la commande suivante pour intégrer les bibliothèques CUnit ``apt install libcunit1``

## Documentation Doxygen
Il est possible de générer la documentation technique de ce projet avec [Doxygen](https://www.doxygen.nl/index.html) en suivant le protocole suivant :

* **Windows**
  * Installation de Doxygen (Ne pas oublier d'ajouter Doxygen dans le PATH windows)
    * [Sourceforge](https://sourceforge.net/projects/doxygen/files/rel-1.9.2/)
  * Génération de la documentation depuis la racine d'installation de DataStructure
    * `mingw32-make documentation`


* **Linux**
  * Installation de Doxygen 
    * ``apt-get install doxygen``
  * Génération de la documentation depuis la racine d'installation de Benchme
    * ``make documentation``

La documentation est généré sous format HTML. Pour la lire, il suffit d'ouvrir le fichier ``index.html`` situer dans le dossier **doc** qui vient d'être créé par Doxygen.
