#include <stdio.h>
#define l 3
typedef struct{
        int turn;
        int grid[3][3];
}tic;
void menu(tic * g, int play);
void printGrid(tic g);
int gameDone(tic g, int* ganador);
int checkMove(tic *g, int x, int y);

int main(){
    int i, j;
    int winner = 0;
    int res = 0;
    tic grid1;
    int play = 1;
    for(i = 0; i< l; i++){
        for(j = 0; j < l; j++){
            grid1.grid[i][j] = 0;
        }
    }

    i = 0;
    grid1.turn = 0;
    while(res == 0){
        play = i%2== 0 ? 1: 2;
        printf("Player: %d\n", play);
        menu(&grid1, play);
        res = gameDone(grid1, &winner);
        //printMat(grid1);
        printf("\n");
        printGrid(grid1);
         printf("\n");
        i++;
        grid1.turn++;
    }
    winner == 0 ? printf("\nPlay again\n") : printf("\nwinner: %d\nPlay again", winner);
    //printGrid(grid1);
}

int gameDone(tic g, int * ganador){
    int i, j;
    int won = 1;
    int won2 = 0;
    int player = 0;
   // printf("%d \n", g.turn);
    if(g.turn == 8){
        printf("Draw\n", g.turn);
        return 1;
    }
    //check for a win
    for(i = 0; i < l && won2 == 0; i++){
        won = 1;
        for(j = 0; j < l && won == 1; j++){
            if(g.grid[i][j] != g.grid[i][0]) {
                //printf("player: %d ,0,0:%d, i: %d; j: %d \n", g.grid[i][j], g.grid[i][0], i, j);
                won = 0;
            }
            //printf("won:%d, i:%d, j:%d \n", won, i, j);
            if(won == 1 && j == l -1 && g.grid[i][0] != 0){
                //printf("here \n");
                won2 = 1;
                player = g.grid[i][j];
            }
     }
    }

    for(i = 0; i < l && won2 == 0; i++){
        won = 1;
        for(j = 0; j < l && won == 1; j++){
            if(g.grid[j][i] != g.grid[0][i]) {
                //printf("player: %d ,0,0:%d, i: %d; j: %d \n", g.grid[i][j], g.grid[i][0], i, j);
                won = 0;
            }
            //printf("won:%d, i:%d, j:%d \n", won, i, j);
            if(won == 1 && j == l -1 && g.grid[0][i] != 0){
                //printf("here \n");
                won2 = 1;
                player = g.grid[j][i];
            }
     }
    }

    won = 1;
    for(i = 0; i < l && won == 1; i++){
        if(g.grid[i][i] != g.grid[0][0]) won = 0;
        if(won == 1 && i == l-1&& g.grid[0][0] != 0){
            won2 = 1;
            player = g.grid[0][0];
        }
    }
    won = 1;
    for(i = 0; i < l && won == 1; i++){
        if(g.grid[i][l-1 -i] != g.grid[0][l-1]) won = 0;
        if(won == 1 && i == l-1 && g.grid[0][l-1] != 0){
            won2 = 1;
            player = g.grid[0][l-1];
        }
    }
    *ganador = player;
    //printf("won2: %d \n", won2);
    if(won2 == 1) return 1;
    return 0;
}


void printGrid(tic g){
    int i,j;
    char a;
    for(i = 0; i < l; i++){
        for(j = 0; j< l; j++){
            a = g.grid[i][j] == 1 ? 'o' : 'x';
            if(g.grid[i][j] == 0) a = '-';
            printf("%c ", a);
            if(j == l-1){
                printf("\n");
            }
        }
    }
}


void printMat(tic g){
    int i,j;
    for(i = 0; i < l; i++){
        for(j = 0; j< l; j++){
            printf("%d ", g.grid[i][j]);
            if(j == l-1){
                printf("\n");
            }
        }
    }
}

void menu(tic * g, int play){
    int x, y;
    printf("X coordinate: ");
    scanf("%d", &x);
    printf("Y coordinate: ");
    scanf("%d", &y);
    while(x > l  || y > l || checkMove(g, x, y) == 1){
        printf("Coordinates out of bounds \n");
        printf("X coordinate:");
        scanf("%d", &x);
        printf("Y coordinate:");
        scanf("%d", &y);
    }
    g->grid[y -1][x -1] = play;
}

int checkMove(tic* g, int x, int y){
    if(g->grid[y-1][x-1] == 0){
        //printf("x: %d, y:%d, %d \n",x, y, g->grid[y-1][x-1]);
        return 0;
    }
    return 1;
}
