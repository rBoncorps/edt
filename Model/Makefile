################################################################
# D�finition des variables
################################################################

# Compilateur
CPP = g++

# Options de compilation
CFLAGS = -Wall -pedantic -ansi

# R�pertoire contenant des fichiers � inclure
INCLUDE = -I .


# Tous les fichiers objets dont d�pend le programme ex�cutable
OBJ = Personne.o Etudiant.o Groupe.o  main.o Module.o


################################################################
# Commandes de compilation
################################################################

all: $(OBJ) main

# Edition de liens
main: $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o main

Personne.o: Personne.h Personne.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c Personne.cpp

Etudiant.o: Etudiant.h Etudiant.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c Etudiant.cpp

Groupe.o: Groupe.h Groupe.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c Groupe.cpp

Module.o: Module.h Module.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c Module.cpp

clean:
	rm -f *.o main
