#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	char fristname[20];
	printf("Enter fristname : ");
	gets_s(fristname);
	printf("Fristname length is %d\n", strlen(fristname));
	char lastname[20];
	printf("Enter lastname : ");
	gets_s(lastname);
	printf("Lastnam length is %d\n", strlen(lastname));

	int age;
	printf("Enter age : ");
	scanf_s("%d",&age);
	if (age >= 60) {
		printf("You are Old");
	}
	else if (age >= 21) {
		printf("You are Adult");
	}
	else if (age >= 12) {
		printf("You are Teen");
	}
	else if (age >= 0) {
		printf("You are Kid");
	}
	else printf("Error");
	return 0;
}