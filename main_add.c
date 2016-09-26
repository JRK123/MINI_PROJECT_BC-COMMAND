#include<stdio.h>
#include<stdlib.h>
int readline(char *, int );
int getnext(char *);
int *addition(int *, int *);
int *reverse(int *);
/*#include "takeinput.c"
#include "count.c"
#include "alloc.c"
#include "getnext.c"
#include "addition.c"*/
 
int main() {
	int *n1, *n2, *n3, *n4, j = 0, k = 0;	
	n1 = (int *)malloc(sizeof(int)*1024);
	n2 = (int *)malloc(sizeof(int)*1024);
	char str[1024];
	readline(str, 1024);
	int i = 0;
	while(1) {
		i = getnext(str);
		if(i < 0) {
			n1[j] = '?';
			break;
		}
		else {
		n1[j] = i;
		j++;
		}
	
	}
	while(1) {
		i = getnext(str);
		if(i < 0) {
			n2[k] = '?';
			break;
		}
		else {
		n2[k] = i;
		k++;
		}
	}
	n3 = addition(n1, n2);
	free(n1);
	free(n2);
	n4 = reverse(n3);	
	free(n3);
	int l = 0;
	while(n4[l] != '?') {
		printf("%d", n4[l]);
		l++;
	}
	free(n4);
	
	return 0;
}	
