#include "student.h"
void stud_show(struct st *ptr)
{
	FILE *fptr;
	struct st temp;
	if((fptr = fopen("Student_record.txt","r")) == NULL)
	{
		printf("File cannot be opned.\n");
		return;
	}
	else
	{
		printf("Display all records in tabular format:\n");
		printf("--------------------------------------\n");
		printf("%-8s  %-15s  %-10s \n","Roll No"," Name"," Percentage");
		printf("--------------------------------------\n");
		while(fscanf(fptr,"%d %s %f\n",&temp.roll,temp.name,&temp.mark) != EOF)
		{
				printf(" %-8d  %-15s  %-10.1f \n",temp.roll,temp.name,temp.mark);
				
		}
		printf("--------------------------------------\n");
	}
	fclose(fptr);
}
