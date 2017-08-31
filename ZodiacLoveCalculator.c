#include <stdio.h>
#include <string.h>

char userName[20];
char loverName[20];
int userBirthdayMonth;
int userBirthdayDay;
int userBirthdayYear;
char userZodiac[20];
int loverBirthdayMonth;
int loverBirthdayDay;
int loverBirthdayYear;
char loverZodiac[20];
int loveCalculation;
int userLove;
int loverLove;

main() {

	printf("\n\n\n");
	printf("*************************************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("*************************************\n");
	printf("Welcome to the Zodiac Love Calculator\n");
	printf("*************************************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("*************************************\n");
	printf("\n\n");

	printf("What is your first name?\n");
	scanf(" %s", userName);	
	printf("\n");

	printf("What is your lover's first name?\n");
	scanf(" %s", loverName);
	printf("\n");

	printf("When is your birthday?\n");
	printf("Enter as MM/DD/YY with no 0 in front of numbers smaller than 2 digits\n");
	scanf(" %d/%d/%d", &userBirthdayMonth, &userBirthdayDay, &userBirthdayYear);
	printf("\n");

	printf("When is your lover's birthday?\n");
	printf("Enter as MM/DD/YY with no 0 in front of numbers smaller than 2 digits\n");
	scanf(" %d/%d/%d", &loverBirthdayMonth, &loverBirthdayDay, &loverBirthdayYear);
	printf("\n");

	printf("\n\n");
	printf("*************************************\n");
	printf("*********** Calculating... **********\n");
	printf("*************************************\n");
	printf("\n\n");

	switch(userBirthdayMonth) {
		case 1:
			if (userBirthdayDay >= 21) {
				strcpy(userZodiac,"Aquarius\0");
				userLove = 40;
			} else {
				strcpy(userZodiac,"Capricorn\0");
				userLove = 47;
			}
			break;

		case 2:
			if (userBirthdayDay >= 20) {
				strcpy(userZodiac,"Pisces\0");
				userLove = 50;
			} else {
				strcpy(userZodiac,"Aquarius\0");
				userLove = 18;
			}
			break;

		case 3:
			if (userBirthdayDay >= 21) {
				strcpy(userZodiac,"Aries\0");
				userLove = 50;
			} else {
				strcpy(userZodiac,"Pisces\0");
				userLove = 50;
			}
			break;

		case 4:
			if (userBirthdayDay >= 21) {
				strcpy(userZodiac,"Taurus\0");
				userLove = 32;
			} else {
				strcpy(userZodiac,"Aries\0");
				userLove = 26;
			}
			break;

		case 5:
			if (userBirthdayDay >= 20) {
				strcpy(userZodiac,"Gemini\0");
				userLove = 0;
			} else {
				strcpy(userZodiac,"Taurus\0");
				userLove = 42;
			}
			break;

		case 6:
			if (userBirthdayDay >= 22) {
				strcpy(userZodiac,"Cancer\0");
				userLove = 25;
			} else {
				strcpy(userZodiac,"Gemini\0");
				userLove = 0;
			}
			break;

		case 7:
			if (userBirthdayDay >= 23) {
				strcpy(userZodiac,"Leo\0");
				userLove = 41;
			} else {
				strcpy(userZodiac,"Cancer\0");
				userLove = 37;
			}
			break;

		case 8:
			if (userBirthdayDay >= 22) {
				strcpy(userZodiac,"Virgo\0");
				userLove = 18;
			} else {
				strcpy(userZodiac,"Leo\0");
				userLove = 11;
			}
			break;

		case 9:
			if (userBirthdayDay >= 24) {
				strcpy(userZodiac,"Libra\0");
				userLove = 20;
			} else {
				strcpy(userZodiac,"Virgo\0");
				userLove = 35;
			}
			break;

		case 10:
			if (userBirthdayDay >= 24) {
				strcpy(userZodiac,"Scorpio\0");
				userLove = 49;
			} else {
				strcpy(userZodiac,"Libra\0");
				userLove = 17;
			}
			break;

		case 11:
			if (userBirthdayDay >= 23) {
				strcpy(userZodiac,"Sagittarius\0");
				userLove = 17;
			} else {
				strcpy(userZodiac,"Scorpio\0");
				userLove = 7;
			}
			break;

		case 12:
			if (userBirthdayDay >= 20) {
				strcpy(userZodiac,"Capricorn\0");
				userLove = 42;
			} else {
				strcpy(userZodiac,"Sagittarius\0");
				userLove = 19;
			}
			break;
	}

	switch(loverBirthdayMonth) {
		case 1:
			if (loverBirthdayDay >= 21) {
				strcpy(loverZodiac,"Aquarius\0");
				loverLove = 19;
			} else {
				strcpy(loverZodiac,"Capricorn\0");
				loverLove = 29;
			}
			break;

		case 2:
			if (loverBirthdayDay >= 20) {
				strcpy(loverZodiac,"Pisces\0");
				loverLove = 39;
			} else {
				strcpy(loverZodiac,"Aquarius\0");
				loverLove = 18;
			}
			break;

		case 3:
			if (loverBirthdayDay >= 21) {
				strcpy(loverZodiac,"Aries\0");
				loverLove = 31;
			} else {
				strcpy(loverZodiac,"Pisces\0");
				loverLove = 41;
			}
			break;

		case 4:
			if (loverBirthdayDay >= 21) {
				strcpy(loverZodiac,"Taurus\0");
				loverLove = 42;
			} else {
				strcpy(loverZodiac,"Aries\0");
				loverLove = 20;
			}
			break;

		case 5:
			if (loverBirthdayDay >= 20) {
				strcpy(loverZodiac,"Gemini\0");
				loverLove = 10;
			} else {
				strcpy(loverZodiac,"Taurus\0");
				loverLove = 9;
			}
			break;

		case 6:
			if (loverBirthdayDay >= 22) {
				strcpy(loverZodiac,"Cancer\0");
				loverLove = 15;
			} else {
				strcpy(loverZodiac,"Gemini\0");
				loverLove = 45;
			}
			break;

		case 7:
			if (loverBirthdayDay >= 23) {
				strcpy(loverZodiac,"Leo\0");
				loverLove = 40;
			} else {
				strcpy(loverZodiac,"Cancer\0");
				loverLove = 35;
			}
			break;

		case 8:
			if (loverBirthdayDay >= 22) {
				strcpy(loverZodiac,"Virgo\0");
				loverLove = 39;
			} else {
				strcpy(loverZodiac,"Leo\0");
				loverLove = 28;
			}
			break;

		case 9:
			if (loverBirthdayDay >= 24) {
				strcpy(loverZodiac,"Libra\0");
				loverLove = 17;
			} else {
				strcpy(loverZodiac,"Virgo\0");
				loverLove = 10;
			}
			break;

		case 10:
			if (loverBirthdayDay >= 24) {
				strcpy(loverZodiac,"Scorpio\0");
				loverLove = 40;
			} else {
				strcpy(loverZodiac,"Libra\0");
				loverLove = 32;
			}
			break;

		case 11:
			if (loverBirthdayDay >= 23) {
				strcpy(loverZodiac,"Sagittarius\0");
				loverLove = 28;
			} else {
				strcpy(loverZodiac,"Scorpio\0");
				loverLove = 37;
			}
			break;

		case 12:
			if (loverBirthdayDay >= 20) {
				strcpy(loverZodiac,"Capricorn\0");
				loverLove = 42;
			} else {
				strcpy(loverZodiac,"Sagittarius\0");
				loverLove = 16;
			}
			break;
	}

	loveCalculation = loverLove + userLove;

	printf("It looks like you're a %s \n", userZodiac);
	printf("and your lover is a %s \n", loverZodiac);
	printf("\n");

	printf("A %s and a %s as a pair?!\n", userZodiac, loverZodiac);
	printf("\n");

	if (strncmp(userZodiac, "Gemini", 15) == 0) {
		printf("Sorry! Geminis don't get to find love. Try again next time...\n");
	} else if (strncmp(loverZodiac, "Gemini", 15) == 0) {
		printf("He's a Gemini! Yikes! Get out of there, sis...\n");
	} else if (loveCalculation <= 35) {
		printf("Yikes!! This is NOT a match made in heaven...\n");
		printf("Our calculations indicate a %d percent chance this works out\n", loveCalculation);
		printf("Good luck sis!\n");
	} else if (loveCalculation > 35 && loveCalculation <= 70) {
		printf("Hmm... It's not exactly perfect, but it could work.\n");
		printf("Our calculations indicate a %d percent chance this union is harmonious\n", loveCalculation);
		printf("Make sure the planets are aligned on trying days!\n");
	} else if (loveCalculation > 70) {
		printf("Yay!! This looks to truly be a match made in the heavens!\n");
		printf("Our calculations indicate a %d percent chance this union is harmonious\n", loveCalculation);
		printf("May the stars smile on your love!\n");
	}

	printf("**************************************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("**************************************\n");
	printf("*Thanks for using the Love Calculator*\n");
	printf("**************************************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("**************************************\n");
	printf("\n\n");

	return 0;

}