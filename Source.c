#include<stdio.h>

void main(void) {
	char name[10], fatherName[10], address[100], gender[10], college[100], school[100];
	int cninc,age, dd, mm, yyyy, scl_year, col_year;
	long  contact,cnic;
	int check = 0;
	
	printf("\nEnter Name: ");
	gets(name,10);
	printf("\nEnter Fathers Name :");
	gets(fatherName);
	printf("\nEnter Date of Birth : (dd-mm-yyyy)");
	scanf_s("%d %d %d", &dd, &mm, &yyyy);
	printf("%d-%d-%d", dd, mm, yyyy);
	printf("\nEnter Address : ");
	gets(address);
	printf("\Enter Contact Number : ");
	scanf_s("%ld", &contact);
	printf("\nCNIC : ");
	scanf_s("%ld", &cnic);
	printf("\nEnter Gender :");
	gets(gender);
	printf("\nEnter HSC (College\\Board) :");
	gets(college);
	printf("\nEnter HSC Year : ");
	scanf_s("%d", &col_year);
	printf("\nEnter SSC (School\\Board) :");
	gets(school);
	printf("\nEnter SSC Year : ");
	scanf_s("%d", &scl_year);

	for (int i = 0; i < 10;i++) {
		if (check == 1) {
			printf("Invalid character in name");
			break;
		}
		if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z' || name[i] == ' ') {
			check = 0;

		}
		else {
			check = 1;
		}
	}
	if (check == 0) {
		printf("\n****************************RESUME****************************");
		printf("\n******************************CV******************************");
		printf("\n**************************************************************");
		printf("\n==============================================================");
		printf("\nName : %s", name);
		printf("\nFather Name : %s", fatherName);
		printf("\nName : %s", name);
		printf("\nDOB : %d-%d-%d", dd, mm, yyyy);
		printf("\nAddress : %s", address);
		printf("\nContact No : %ld", contact);
		printf("\nCNIC : %ld", cnic);
		printf("\nGender : %s", gender);
		printf("\nCollege : %s", college);
		printf("\nCollege Year : %d", col_year);
		printf("\nSchool : %s", school);
		printf("\nSchool Year : %d", scl_year);
	}
}
