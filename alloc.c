#include<stdlib.h>
int count_num(int *);
int *mem_alloc() {
	int *a;
	a = (int *)malloc(sizeof(int)*1024);
	return a;
}

void mem_free(int *a) {
	free(a);
}


int *reverse(int *n) {
	int *k, i, j = 0;
	k = (int *)malloc(sizeof(int )*1024);
	i = count_num(n);
	while(i > 0) {
		k[j] = n[i - 1];
		j++;
		i--;
	}
	k[j] = '?';
	return k;
}

