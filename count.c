#ifndef __A__
#define __A__

int count_num(int *n) {
	int i = 0;
	while(n[i] != '?') {
		i++;
	}
	return i;
}

int compare(int n1, int n2) {
	return n1 - n2;
}
#endif
