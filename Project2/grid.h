void initGrid(Grid* grid) {
	grid->cell = (Cell*)malloc(sizeof(Cell) * grid->width * grid->height); //Attribution d'un espace dans la mémoire au tableau
	for (int x = 0; x < grid->width; x++) {
		for (int y = 0; y < grid->height; y++) {
			Cell* cell = getCell(grid, x, y); //Définition des valeurs des cellules par défaut
			cell->x = x;
			cell->y = y;
			cell->occupe = 0;
		}
	}
}

void displayGrid(Grid* grid) { //Affichage du tableau
	printf("\n");
	for (int x = 0; x < grid->width; x++) {
		for (int y = 0; y < grid->height; y++) {
			Cell* cell = getCell(grid, x, y); //Récupération des cellules
			char display = '.'; //Mettre un . pour afficher le tableau
			printf("%c", display); //Affichage sur le tableau des valeurs occupe
		}
		printf("\n");
	}
}