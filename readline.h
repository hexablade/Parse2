#ifndef TOKEN_H_
#define TOKEN_H_

#define MAXIMUM_LINES 1000
#define MAXIMUM_TOKENS 5000

typedef struct Stream
{
    int n[MAXIMUM_LINES][MAXIMUM_TOKENS];
    char tkns[MAXIMUM_TOKENS];

}Tokens;

Tokens lines[MAXIMUM_LINES];

Tokens readline(Tokens **lines[]);




#endif
