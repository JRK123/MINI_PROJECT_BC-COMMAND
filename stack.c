#include "stack.h"

void push(stack *s, Integer num) {
	s->a[s->i]= num;
	(s->i)++;
}
/* the caller should check that the stack is not empty before calling pop() 
 */
Integer pop(stack *s) {
	Integer t = s->a[s->i - 1];
	(s->i)--;
	return t;
}
int empty(stack *s) {
	return s->i == 0;
}
int full(stack *s) {
	return s->i == MAX;
}
/* It is mandatory to call init() on a stack before calling push, pop or any other function on the stack 
 */
void init(stack *s) {
	s->i = 0;
}
