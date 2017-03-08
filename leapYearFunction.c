/*
 *	Lucas & Andrew
 *	03/08/2017
 *	Our simple little program to find if the 
 *	chosen year is a leap year or not.
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0
#define START_GREG_CAL 1582

int isLeapYear(int year); 

int main(int argc, char *argv[]) {

	int user_year;
	while (user_year != -1) {
		printf("Choose a year:\n");
		scanf("%d", &user_year);
		
		if (user_year != -1) {

			assert(user_year > START_GREG_CAL);
	
			int leapResult = isLeapYear(user_year);

			if (leapResult == TRUE) {
				printf("This is a leap year.\n");
			} else {
				printf("This is not a leap year.\n");
			}
		}
	}

	printf("Good Bye!\n");

	return EXIT_SUCCESS;

}

int isLeapYear(int year) {
	// every 400 years is be a leap year
	if (year % 400 == 0) {
		return TRUE;
	}
	// every century is not a leap year
	if (year % 4 == 0 && (! year % 100 == 0)) {
		return TRUE;
	} else {
		return FALSE;
	}
}