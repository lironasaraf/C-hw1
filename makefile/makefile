CC= gcc
AR=ar
FLAGS= -Wall -g
all: maind mains libmyMath.so libmyMath.a

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o

libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

.PHONY: clean all
clean:
	rm -f *.o maind mains *.a *.so
	
