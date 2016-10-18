#ifndef __S__
#define __S__
//#include "integer.h"
#include "husefulfunc.h"
#endif
Integer SubstractIntegers(Integer a1, Integer b1) {
	Integer k, z;
	int compare, i = 0, temp = 0, j = 0;
	k.a = (int *)malloc(sizeof(int) * SIZE);
	compare = a1.n - b1.n;
/*	if(a1.sign == '-') {
		a1.sign = '+';
		z = AddIntegers(a1, b1);
		z.sign = '-';
		return z;
	}*/
	if(compare >= 0) {
		while(b1.n > 0) {
			if(a1.a[a1.n - 1] >= (b1.a[b1.n - 1] + temp)) {
				k.a[i] = (a1.a[a1.n - 1] - (b1.a[b1.n - 1] + temp));
				a1.n--;
				b1.n--;
				temp = 0;
				i++;
				k.n++;
			}
			else if(a1.a[a1.n - 1] < (b1.a[b1.n - 1] + temp)) {
				k.a[i] = ((a1.a[a1.n - 1] + 10) - (b1.a[b1.n - 1] + temp)); 
				temp = 1;
				a1.n--;
				b1.n--;
				i++;
				k.n++;
			}
		}
		while(a1.n > 0) {
			
			if(a1.a[a1.n - 1] >= temp) {
				k.a[i] = (a1.a[a1.n - 1] - temp);
				a1.n--;
				temp = 0;
				i++;
				k.n++;
			}
			else if(a1.a[a1.n - 1] < temp) {
				k.a[i] = ((a1.a[a1.n - 1] + 10) - temp); 
				temp = 1;
				a1.n--;
				i++;
				k.n++;
			}
		}
		if(temp == 1) {
			k.sign = '-';
			k.a[0] = 10 - k.a[0];
			for(j = 1; j < k.n; j++ ) {
				k.a[j] = 9 - k.a[j];
			}
		}
	k = Reverse(k);	
	return k;
	}			 						
	if(compare < 0) {
		Integer s;
		s = SubstractIntegers(b1, a1);
		s.sign = '-';
		return s;
	}				 						
		
}
