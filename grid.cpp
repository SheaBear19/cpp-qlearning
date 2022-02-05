#include "grid.h"

Grid::Grid(){

    rows = 5;
    cols = 5;

}

void Grid::print_grid(){

    for(int i = 0; i < rows; i++){
        print_row_outline_horizontal(cols);
        print_row_outline_vertical(cols);
    }
    print_row_outline_horizontal(cols);

}

void Grid::print_row_outline_horizontal(int length){
    for(unsigned int i = 0; i < length; i++){
        std::cout << "+---";
    }
    std::cout << "+" << std::endl;
}

void Grid::print_row_outline_vertical(int length){
    for(unsigned int i = 0; i < length; i++){
        std::cout << "|   ";
    }
    std::cout << "|" << std::endl;
}