void initGrid(Grid* grid) {
	grid->cell = (Cell*)malloc(sizeof(Cell) * grid->width * grid->height); //Attribution d'un espace dans la m�moire au tableau
	for (int x = 0; x < grid->width; x++) {
		for (int y = 0; y < grid->height; y++) {
			Cell* cell = getCell(grid, x, y); //D�finition des valeurs des cellules par d�faut
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
			Cell* cell = getCell(grid, x, y); //R�cup�ration des cellules
			char display = '.'; //Mettre un . pour afficher le tableau
			printf("%c", display); //Affichage sur le tableau des valeurs occupe
		}
		printf("\n");
	}
}