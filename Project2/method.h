typedef struct Cell { //D�finition de la fonction Cell
	int x;
	int y;
	int occupe;
} Cell;

typedef struct Grid { //D�finition de la fonction Board
	Cell* cell;
	int width;
	int height;
} Grid;