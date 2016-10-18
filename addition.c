#ifndef __S__
#define __S__
//#include "integer.h"
#include "husefulfunc.h"
#endif
Integer AddIntegers(Integer a1, Integer b1) {
	Integer k, z;
	k.n = 0;
	k.a = (int *)malloc(sizeof(int)*SIZE);
	int i = 0, j = 0, compare, temp = 0;
	if(a1.sign == '-') {
		z = SubstractIntegers(b1, a1);
		return z;
	}
	compare = a1.n - b1.n;
	if(compare >= 0 ) {
		while(b1.n > 0) {
			temp = a1.a[a1.n - 1] + b1.a[b1.n - 1] + temp;
			k.a[i] = temp % 10;
			temp = temp/10;
			k.n++;
			a1.n--;
			b1.n--;
			i++;
		}
		while(a1.n > 0) {
			temp = a1.a[a1.n - 1] + temp;
			k.a[i] = temp % 10;
			temp = temp/10;
			k.n++;
			i++;
			a1.n--;			
		}
		if(temp != 0) {
			k.a[i] = temp;
			k.n++;
		}
	z = Reverse(k);
	return z;
	}
	else if(compare < 0 ) {
		while(a1.n > 0) {
			temp = a1.a[a1.n - 1] + b1.a[b1.n - 1] + temp;
			k.a[i] = temp % 10;
			temp = temp/10;
			k.n++;
			a1.n--;
			b1.n--;
			i++;
		}
		while(b1.n > 0) {
			temp = b1.a[b1.n - 1] + temp;
			k.a[i] = temp % 10;
			temp = temp/10;
			k.n++;
			i++;
			b1.n--;			
		}
		if(temp != 0) {
			k.a[i] = temp;
			k.n++;
		}
	z = Reverse(k);
	return z;
	}
	
}
