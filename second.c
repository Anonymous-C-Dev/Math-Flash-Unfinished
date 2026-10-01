#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <string.h>

void options(void) {
	printf("\n*Algebra = 'OPT1'\n -Linear Functions(w/Cartesian Plane) = 'OPT2'\n*Geometry = 'OPT3'\n -Planes = 'OPT4'\n -Quadrilaterals = 'OPT5'\n -Reasonings = 'OPT6'\n\n");
}

void algebra(void) {
	printf("\n-Linear Functions(w/Cartesian Plane) = 'OPT1'\n-Exit Program = 'exit'\n\n");
	while(1) {
		char algebra_ui[99];
		scanf(" %s",algebra_ui);
		if(strcmp(algebra_ui, "OPT1")==0) {
			printf("gay\n");
		}
		if(strcmp(algebra_ui, "exit")==0) {
			printf("\n Back to main interface\n type 'options' to see all options.\n\n");
			break;
		}
		else {
			printf("You typed an invalid input.\n\n");
			continue;
		}
		sleep(1);
	}
}
		

int main() {
	printf("Hello! Welcome to grade 9 MATH flash interface. would you like me to execute the app? Y/N \n(typing more than 1 letter will cause an unexplained error)   ");
	while(1) {
		char first_ui;
		scanf(" %1c",&first_ui);
		if(first_ui == 'N' || first_ui == 'n') {
			printf("Closing program, Please wait...\n");
			abort();
		}
		
		if(first_ui == 'Y' || first_ui == 'y') {
			break;
		}
		
		else {
			printf("Invalid Input. only Y/N are valid.\n");
			continue;
		}
		sleep(1);
	}
	
	printf(" Welcome to MATH flash interface! type in what you want to explore.\n type 'options' to see all options.\n\n");
	while(1) {
		char second_ui[99];
		scanf(" %s",second_ui);
		if(strcmp(second_ui, "options")==0) {
			options();
			continue;
		}
		if(strcmp(second_ui, "OPT1")==0) {
			algebra();
		}
		sleep(1);
	}
}
