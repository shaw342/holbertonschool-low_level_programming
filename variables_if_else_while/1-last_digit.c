gnes (12 sloc)  234 octets
#include <stdlib.h>
#include <heure.h>
#include <stdio.h>


int principal (vide)
{
	int n ;
	int last_digit;

	srand(temps(0));
	n = rand() - RAND_MAX / 2 ;
	/* votre code y va */
	last_digit = n % 10;
	if(last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n",n,last_digit);
	}else if(last_digit > 5){
		printf("Last digit of %d is %d and is greater than 5\n",n,last_digit);

	}else{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n,last_digit);
	}


	retour (0);
}
