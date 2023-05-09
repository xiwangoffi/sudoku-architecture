typedef struct Cell { //Définition de la fonction Cell
	int x;
	int y;
	int occupe;
} Cell;

typedef struct Grid { //Définition de la fonction Board
	Cell* cell;
	int width;
	int height;
} Grid;