#include<stdio.h>
//#include "integer.h"
#include "husefulfunc.h"
int main(int arcg, char *argv) {
	Integer z;
	int x = -1;
	char str[1024];
	while(x != 0) {
	x = readline(str, 1024);
	z = infixval(str);
	PrintInteger(z);	
	}
}
