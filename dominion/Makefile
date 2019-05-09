CFLAGS= -Wall -fpic -coverage -lm -std=c99

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)


unittest4: dominion.o unittest4.c
		gcc -o unittest4 unittest4.c -g dominion.o rngs.o $(CFLAGS)

cardtest3: dominion.o cardtest3.c
			gcc -o cardtest3 cardtest3.c -g dominion.o rngs.o $(CFLAGS)
cardtest4: dominion.o cardtest4.c
			gcc -o cardtest4 cardtest4.c -coverage -fpic -lm -g dominion.o rngs.o $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)


all: playdom player cardtest4 cardtest3 unittest4

clean:
	rm -f *.o playdom.exe playdom dumbo cardtest1 cardtest2 cardtest3 cardtest4 unittest3 unittest4 unittest1 unittest2 player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
