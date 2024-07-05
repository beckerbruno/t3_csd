#include <hf-risc.h>
#include "vga_drv.h"

#define TRUE 1
#define FALSE 0

void init_grid(bool grid[][8], int x, int y){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            grid[i][j] = TRUE;
        }
    }
}

struct block {
    int x;
    int y;
    bool status;
};

int main(void) {
    int x, y;

    x = 2 * 14;
    y = 8;

    bool grid[x][y];

    // Inicializando o array `grid` corretamente
    init_grid(grid, x, y);

    while (1) {
        display_background(BLACK);
        // display: 640x480
        // margem: 5 pixels
        // limites verticais: margem + 20 até VGA_HEIGHT / 3
        // Limites horizontais: 2margem até VGA_WIDTH - margem
        // Bloco - Largura: 40px - Altura: 10px
        // Lacuna entre blocos: 5px h e c
        // Deslocamento entre origem dos blocos 45px x 15px
    }
    
    return 0;
}
