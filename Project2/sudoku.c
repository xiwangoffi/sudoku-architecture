// Importation des librairies essentielles
#include <stdlib.h>
#include <stdio.h>
#include "grid.h";
#include "method.h";
#include "coordinateAction.h";

void initGrid(Grid* grid); //Init de initBoard
void displayGrid(Grid* grid); //Init de displayBoard
void placeNumber(Grid* grid, int x, int y, int number); //Init de la fonction pour placer un chiffre

int main() {
	Grid grid;
	grid.height = 9; //Définition de la taille du tableau (largeur et hauteur)
	grid.width = 9;

	initGrid(&grid);	  //
	displayGrid(&grid); //Fonction pour démarrer le jeu

	return 0;
}
