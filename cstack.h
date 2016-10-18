#define MAX 128
typedef struct cstack{
	char a[MAX];
	int i;
}cstack;
void cpush(cstack *s, char num);
char cpop(cstack *s);
int cempty(cstack *s);
int cfull(cstack *s);
void cinit(cstack *s);
