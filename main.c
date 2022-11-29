#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int sNum;
	char sName[10];
	float sScore;
};

int main(int argc, char *argv[]) {
	struct student s0 = {0, "", 0.0};
	
	printf("input student number : ");
	scanf("%d", &s0.sNum);
	
	printf("input the name of the student : ");
	scanf("%s", s0.sName);
	
	printf("input score of the student : ");
	scanf("%f", &s0.sScore);
	
	
	printf("Num) %d\nName) %s\nScore) %f", s0.sNum, s0.sName, s0.sScore);
	return 0;
}
