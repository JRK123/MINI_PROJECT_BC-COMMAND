#include <stdio.h>
#include <stdlib.h>
#include "integer.h"
#define OPERAND 10 
#define OPERATOR 20
#define	END	30
#define ERROR	40
enum states { SPC, DIG, OPR, STOP, ERR };
static int pstate = DIG;
static int i = 0 ;

token *getnext(char *arr) {
	int cstate;
	int num;
	
	token *t = (token *)malloc(sizeof(token));
	t->k.a = (int*)malloc(sizeof(int )*1024);
	t->k.b = (int *)malloc(sizeof(int)* 1024);
	t->k.m = t->k.n = 0;

	while(1) {
		switch(arr[i]) {
			
			case '0': case '1': case '2': case '3':
			case '4': case '5': case '6': case '7':
			case '8': case '9': 
				cstate = DIG;
				break;
			case '+': case '-': case '*': case '/':
			case '%': case '(': case ')':
				cstate = OPR;
				break;
			case '\0':
				cstate = STOP;
				break;
			case ' ':
				cstate = SPC;
				break;
			default:
				cstate = ERR;
				break;
		}
		switch(pstate) {
			case SPC:
				if(cstate == DIG) {
						t->k.a[t->k.n] = arr[i] - '0';
						t->k.n++;
				}
				if(cstate == OPR) {
					
				}
				if(cstate == SPC) {
					
				}
				if(cstate == ERR) {
				}			
				break;
			case DIG:
				if(cstate == DIG) {
					t->k.a[t->k.n] = arr[i] - '0';
					t->k.n++;
				}
				if(cstate == SPC) {
						
				}
			
						
				if (cstate == OPR || cstate == STOP) {
					t->type = OPERAND;
					pstate = cstate;
					return t;
				}
				break;
			case OPR:
				if(cstate == OPR) {
					t->k.sign = arr[i];
					break;	
				}
				if(cstate == DIG) {
					t->type = OPERATOR;
					t->op = arr[i - 1];
				}
				
				pstate = cstate;
				return t;
				break;
			case STOP:
				i = 0;
				t->type = END;
				pstate = DIG;
				return t;
				break;
			case ERR:
				t->type = ERROR;
				pstate = cstate;	
				return t;
				break;
		}
		pstate = cstate;
		i++;
	}
}
