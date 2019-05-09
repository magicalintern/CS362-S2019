#include "dominion.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>
#include <assert.h>

int main (int argc, char** argv) {
  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  initializeGame(2, k, 100, &G);


  int money = 0;
  int smithyPos = -1;
  int adventurerPos = -1;
  int i=0;

  int numSmithies = 0;
  int numAdventurers = 0;

  int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;

  printf("Testing OutPost Card\n");
  //Test 1
  cardEffect(outpost, choice1, choice2, choice3, &G, handpos, &bonus);
  printf("OutPost Status: %d\n", G.outpostPlayed);
  printf("Expected After Outpost: 1\n");
  assert(G.outpostPlayed == 1);

  // Test 2
  printf("Hand Count: %d\n", G.handCount[0]);
  printf("Expected After Outpost: 4\n");
  assert(G.handCount[0] == 4);







  return 0;
}
