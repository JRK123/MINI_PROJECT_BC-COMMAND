#include<stdio.h>
int readline(char *arr, int len) {
        int i = 0;
        int ch;
        while((ch = getchar()) != '\n' && i < len - 1) {
                arr[i] = ch;
                i++;
        }
        arr[i] = '\0';
        return i;
}
	
	
