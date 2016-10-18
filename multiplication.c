#include "husefulfunc.h"
#include <stdlib.h>
Integer Multiply(Integer a1, Integer b1 ) {
	
	int i, j, c, k = 0, l = 0, temp = 0, num1, diff;
	Integer result, num;
	i = a1.n;
	j = b1.n;
	c = a1.n - b1.n;
	result.a = (int *)malloc(sizeof(int )* 1024);
	result.n = 0;
	num.a = (int *)malloc(sizeof(int )* 1024);
	num.n = 0;
	k = a1.n;
	l = b1.n;
	if(c >= 0) {
		while(a1.n) {
			num1 = b1.a[b1.n - 1] * a1.a[a1.n - 1] + temp;
			result.a[result.n] = num1 % 10;
			temp = num1 / 10;
			a1.n--;
			result.n++;
		}
		result.a[result.n] = temp;
		result.n++;
		if(result.a[result.n - 1] == 0)
			result.n--;
		result = Reverse(result);
		b1.n--;	
		if(b1.n) {
			while(b1.n) {
				temp = 0;
				num.n = 0;
				a1.n = k;
				diff = l - b1.n;
				while(diff) {
					num.a[num.n] = 0;
					num.n++;
					diff--;
				}
				while(a1.n) {
					num1 = b1.a[b1.n - 1] * a1.a[a1.n - 1] + temp;
					num.a[num.n] = num1 % 10;
					temp = num1 / 10;
					a1.n--;
					num.n++;
				}
				num.a[num.n] = temp;
				num.n++;
				if(num.a[num.n - 1] == 0)
					num.n--;
				num = Reverse(num);
				result = AddIntegers(result, num);
				result = Reverse(result);
				b1.n--;			
			}
		}
		return result;
	}
	if(c < 0) {
		result = Multiply(b1, a1);
		return result;
	}
}


