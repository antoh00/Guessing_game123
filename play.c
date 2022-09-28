#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void play(int roundsAvailable){
	int i;
	int input;
	int outcome;
	int betAmount;

	for (i =0; i <= roundsAvailable; i++){
	 
	 outcome = rand() % 7 ;
	 printf("WEKA LUCKY NAMBA YAKO: \n");
	 scanf("%d", &input);
	 printf("WEKA KIWANGO: \n");
	 scanf("%d", &betAmount);
	 if (outcome == input){
	 printf("---------------------------------\nLucky namba ni : %d \nHONGERA UMESHINDA SHILLINGI: %d \n----------------------------------\n", outcome, betAmount * 4);
	 
	 }
	 else{
	 printf("---------------------------------\nLucky namba ni : %d \nJARIBU TENA BAHATI YAKO\n----------------------------------\n", outcome);}
	 }

	

}

