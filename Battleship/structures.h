#pragma once
// структуры
typedef unsigned int uint;

struct GridСell {
	Position pos_cell;
	char show_symb = '~';
	char gen_symb = '~';
};

struct Position {
	uint x;
	uint y;
};