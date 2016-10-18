bc:	main.o substraction.o addition.o getnext.o stack.o cstack.o infix.o takeinput.o usefulfunc.o
	gcc main.o substraction.o multiplication.o addition.o getnext.o stack.o cstack.o infix.o takeinput.o usefulfunc.o -o bc
main.o:	main.c integer.h husefulfunc.h
	gcc -c main.c
addition.o:	addition.c husefulfunc.h 
	gcc -c addition.c
substraction.o: substraction.c husefulfunc.h
	gcc -c substraction.c
multiplication.o:multiplication.c husefulfunc.h
	gcc -c multiplication.c
getnext.o:	getnext.c integer.h 
	gcc -c getnext.c 
stack.o:	stack.c stack.h husefulfunc.h
	gcc -c stack.c
cstack.o:	cstack.c cstack.h 
	gcc -c cstack.c
infix.o:	infix.c husefulfunc.h
	gcc -c infix.c
takeinput.o:	takeinput.c
	gcc -c takeinput.c

usefulfunc.o:	usefulfunc.c husefulfunc.h
	gcc -c usefulfunc.c
clean:	
	rm *.o
