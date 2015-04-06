#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "token.h"

// 
int read_line(char **line)
{
    /* Check parameters */
    if( NULL == *line ) {
        fprintf(stderr, "Error: Input to read_line() is NULL!\n");
        return -1;
    }
    
    /* Read a line */
    (*line)[0] = '\0';
    if( NULL == fgets(*line, MAX_INPUT_LINE, stdin) ) {
        /* End of input stream */
        return 1;
    }
    
    /* Strip off the newline */
    //if( '\n' == (*line)[strlen(*line)-1] ) {
    //  (*line)[strlen(*line)-1] = '\0';
    //}
    
    return 0;
}

// tokenizes a string  from the command line one cahracter at a time.
void cltokenizer(){

    char ch;
    char answer;

    printf("Enter the String to be parsed: \n");
    ch = getchar();
    while(ch != EOF){
       
        while(isspace(ch) || isblank(ch)){
            ch = getchar();
            }
        if(!isalnum(ch)){
          
            printf("%c\n", ch);
            ch = getchar();
        }
        else if(isdigit(ch)){
           
            putchar(ch);
            ch = getchar();
        
        
        }

        else if(isalnum(ch)){  
            putchar(ch);
            ch = getchar();

        }
        if(ch == '\n'){           
            printf("\nWant to perform another operation...\n");
            scanf("%c",&answer);
            switch(answer){
                case 'y':
                    printf("Enter string: ");
                    continue;
                case 'n':
                    ch = EOF;
                    break;

            }
        }
    }
    printf("Cl program done ...\n");

}

void fptokenizer(char *line){
    
}


