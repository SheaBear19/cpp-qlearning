#ifndef GRID_H
#define GRID_H

#include <iostream>

class Grid {

private:

    int rows;
    int cols;


public:

    Grid();

    void print_grid();
    void print_row_outline_horizontal(int);
    void print_row_outline_vertical(int);

};

#endif