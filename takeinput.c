#include<stdio.h>
/*int readline(char *arr, int len) {
        int i = 0;
        int ch = '@';
	while(1) {	
        ch = getchar();
		if(ch == '')
			break;
	
	printf("%c", ch);
        arr[i] = ch;
        i++;
        }
        arr[i] = '\0';
        return i;
}*/
	
	 
int readline(char *arr, int len) {
	int x = 0;
	int ch;
	while((ch = getchar()) != '\n' && x < len - 1) {
		arr[x] = ch;
		x++;
	}
	arr[x] = '\0';
	return x;
}

