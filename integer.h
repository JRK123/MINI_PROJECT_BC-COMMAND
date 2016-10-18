#ifndef __INTEGER__
#define __INTEGER__
#include<stdio.h>
#include<stdlib.h>
#define OPERAND 10 
#define OPERATOR 20
#define	END	30
#define ERROR	40
#define SIZE 1024

typedef struct Integer {
	int *a;
	int *b;
	char sign;
	int n;
	int m;
}Integer;


typedef struct token {
	int type;
	Integer k;
	char op;
}token;


/*Integer AddIntegers(Integer a1, Integer b1);
Integer SubstractIntegers(Integer a1, Integer b1);
token *getnext(char *);
int readline(char *, int );
Integer infixval(char *);*/

#endif
