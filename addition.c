#include<stdlib.h>
#include "functions.h"
int *addition(int *n1, int *n2) {
	int i, j, c, *result;
	i = count_num(n1);
	j = count_num(n2);
	c = compare(i, j);
	result = (int *)malloc(sizeof(int )*1024);
	if(c == 0) {
		

		int k, r = 0, temp = 0;
		while(i > 0) {
			k = n1[i - 1] + n2[j - 1] + temp;	
			result[r] = k % 10;
			temp = k / 10;	
			i--;
			j--;
			r++;
		}
		if(temp == 0) {
		}
		else if(temp == 1) {
			result[r] = temp;
			r++;
		}
		result[r] = '?';
		return result;
	}
			
	if(c > 0) {
		

		int k, r = 0, temp = 0;
		while(j > 0) {
			k = n1[i - 1] + n2[j - 1] + temp;	
			result[r] = k % 10;
			temp = k / 10;	
			i--;
			j--;
			r++;
		}
		if(temp == 0) {
			while(i > 0) {
				result[r] = n1[i - 1];
				r++;
				i--;
			}
		}
		else if(temp == 1) {
			result[r] = n1[i - 1] + temp;
			r++;
			i--;
	
			while(i > 0) {
				result[r] = n1[i - 1];
				r++;
				i--;
			}
		}
		result[r] = '?';
		return result;
	}


	if(c < 0) {
		

		int k, r = 0, temp = 0;
		while(i > 0) {
			k = n1[i - 1] + n2[j - 1] + temp;	
			result[r] = k % 10;
			temp = k / 10;	
			i--;
			j--;
			r++;
		}
		if(temp == 0) {
			while(j > 0) {
				result[r] = n2[j - 1];
				r++;
				j--;
			}
		}
		else if(temp == 1) {
			result[r] = n2[j - 1] + temp;
			r++;
			j--;
	
			while(j > 0) {
				result[r] = n2[j - 1];
				r++;
				j--;
			}
		}
		result[r] = '?';
		return result;
	}
}
