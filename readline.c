#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define MAX_INPUT_LINES 512

Tokens readline(Tokens *lines[]){

    int j = 0;
    int i = 0;
    char ch;

    for (j = 0; j != EOF; j++){
        for(i =  0; i != '\n'; i++){

     fgets(*lines[j]->tkns[i],lines[j]->n[j][i], stdin);
    
        }
    }

    return *lines[j];
}


int read_line(char *lines){

    //the file opens
    
          char *filename = "Maze.txt";

            FILE *fp;

              fp = fopen(filename, "r");


    return 1;
}
