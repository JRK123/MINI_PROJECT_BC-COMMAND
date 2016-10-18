#include "cstack.h"
void cpush(cstack *s, char num) {
	s->a[s->i]= num;
	(s->i)++;
}
/* the caller should check that the cstack is not empty before calling pop() 
 */
char cpop(cstack *s) {
	char t = s->a[s->i - 1];
	(s->i)--;
	return t;
}
int cempty(cstack *s) {
	return s->i == 0;
}
int cfull(cstack *s) {
	return s->i == MAX;
}
/* It is mandatory to call init() on a cstack before calling push, pop or any other function on the cstack 
 */
void cinit(cstack *s) {
	s->i = 0;
}
