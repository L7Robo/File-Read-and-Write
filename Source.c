#include <stdio.h>

void main()
{
	FILE* pRead;
	errno_t err;

	char fname[20];
	char lname[20];
	char id[15];
	float gpa = 0.0;

	//pwrite = fopen-s("student.dat", "w");
	//if (pwrite == NULL)
	//(pRead == NULL)
	printf("File not open\n");

	if ((err = fopen_s(&pRead, "student.dat", "w"))) {
		printf("File not open\n");
	}
	else {
		printf("\Name\t\tID\t\tGPA\n\n");
		fscanf_s(pRead, "%s%s%s%f", fname, lname, id, &gpa);

		fprintf(pRead, "%s\t%s\t%s\t%.2f\n", fname, lname, id, gpa);
		fclose(pRead);
	}
}