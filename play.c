#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void play(int roundsAvailable){
	int i;
	int input;
	int outcome;
	int betAmount;
	

	for (i =0; i < roundsAvailable; ++i){
	 
	 srand ( time(NULL) );
	 outcome = (rand() % 10) ;
	 printf("New Bet: \nWEKA LUCKY NAMBA YAKO: \n");
	 scanf("%d", &input);
	 printf("WEKA KIWANGO: \n");
	 scanf("%d", &betAmount);
	 if (outcome == input){
	 printf("---------------------------------\nLucky namba ni : %d \nHONGERA UMESHINDA SHILLINGI: %d \n----------------------------------\n", outcome, betAmount * 5);
	 
	 }
	 else{
	 printf("---------------------------------\nLucky namba ni : %d \nJARIBU TENA BAHATI YAKO\nNambari uliyochagua ni: %d\n----------------------------------\n", outcome, input);
	 outcome = 0;}
	 }

	

}

