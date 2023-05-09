int getCellPosition(Grid* grid, int x, int y) { //Récupère la position d'une cellule
	return x * grid->width + y;
}

Cell* getCell(Grid* grid, int x, int y) { //Récupère une cellule
	int pos = getCellPosition(grid, x, y);
	return &grid->cell[pos];
}

void placeNumber(Grid* grid, int x, int y, int number) {
	grid->cell[getCellPosition(grid, x, y)].occupe = number; //Permet de placer un chiffre dans la grille
}