#include <stdio.h>
#ifndef __S__
#define __S__
#include "husefulfunc.h"
#endif
#include "cstack.h"
#include "stack.h"
token *getnext(char *);
int precedence(char op) {
        if(op == '%')
                return 4;
        if(op == '*' || op == '/')
                return 3;
        if(op == '+' || op == '-')
                return 2;
	if(op == '#')
		return 1;
        
}

Integer infixval(char *infix)
{
	token *t;
	stack d;
	char x, y;
	int p1, p2, j = 0; 
	Integer result, resultin, m, n;
	init(&d);
	cstack b;
	cinit(&b);
	cpush(&b, '#');
	while(1)
	{	
		t = getnext(infix);
//		if(t->type == END)
//			return result;
		if(t->type == OPERAND)
		{	
//			printf("%d", t->k.n);
			push(&d, t->k);		
			continue;	
		}

	
		else if(t->type == OPERATOR)
		{
			if(t->op == '+' || t->op == '-' ||t->op == '*' || t->op == '/' || t->op == '%')
			{
				x = cpop(&b);
				p1 = precedence(x);
				y = t->op;
				p2 = precedence(y);
				if(p1 >= p2)
				{
					n = pop(&d);
					m = pop(&d);
					switch(x)
					{
						case '+':
							result = AddIntegers(m, n);
							break;
						case '-':
							result = SubstractIntegers(m, n);
							break;
						case '*':
							result = Multiply(m, n);
							break;
						case '/':
						//	result = m / n;
							break;
						case '%':
						//	result = m % n;
							break;
					}
					push(&d, result);
					cpush(&b, y);							
				}
				else if(p1 < p2)
				{
					cpush(&b, x);
					cpush(&b, y);		
				}
				continue;
			}
		/*	else if(t->op == '(')
			{
				result = infixval(infix);
				push(&d, result);
				k = '@';
				continue;
			}
			else if(t->op == ')')
			{
				
				push(&a, k);
				if(pop(&a) == '@') {
				}
				else
					push(&a, k);
				while(1)
				{	
					x = cpop(&b);
					if(x == '#')
					{
						n = pop(&a);
						return n;	
					}
					n = pop(&a);
					m = pop(&a);
					
					switch(x)
					{	
						
						case '+':
							result = m + n;
							break;
						case '-':
							result = m - n;
							break;
						case '*':
							result = m * n;
							break;
						case '/':
							result = m / n;
							break;
						case '%':
							result = m % n;
							break;
					}
					push(&a, result);
					result = pop(&a);
					if(!empty(&a))
					{
						push(&a, result);
						continue;
					}
					else 
						return result;
				}	
			}*/
	//	continue;
		
		}
		else if(t->type == END) 
		{
			while(1)
			{	
				x = cpop(&b);
				if(x == '#')
				{
					n = pop(&d);
					return n;	
				}
				n = pop(&d);
				m = pop(&d);
				
				switch(x)
				{	
					
					case '+':
						result = AddIntegers(m, n);
						break;
					case '-':
						result = SubstractIntegers(m, n);
						break;
					case '*':
						result = Multiply(m, n);
						break;
					case '/':
					//	result = m / n;
						break;
					case '%':
					//	result = m % n;
						break;
				}
				push(&d, result);
				result = pop(&d);
				if(!empty(&d))
				{
					push(&d, result);
					continue;
				}
				else 
					return result;
			}	
		}	
	}
}
