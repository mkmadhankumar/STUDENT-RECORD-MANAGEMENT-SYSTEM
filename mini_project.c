#include "student.h"

int main()
{
	struct st *hptr = NULL;
	int count = 0;
	char choice;
	char exit_choice;

	hptr = load(&count);

	while(1)
	{
		printf("\n");
		printf("******** STUDENT RECORD MENU ********\n");
		printf("A/a : Add New Record\n");
		printf("D/d : Delete Record\n");
		printf("S/s : Show Records\n");
		printf("M/m : Modify Record\n");
		printf("V/v : Save Records\n");
		printf("T/t : Sort Records\n");
		printf("E/e : Exit\n");
		printf("------------------------------------\n");
		printf("Enter Your Choice : ");
		scanf(" %c",&choice);

		switch(choice)
		{
			case 'A':
			case 'a':
				stud_add(&hptr,count);
				count++;
				break;

			case 'D':
			case 'd':
				stud_del(&hptr);
				break;

			case 'S':
			case 's':
				stud_show(hptr);
				break;

			case 'M':
			case 'm':
				stud_mod(&hptr);
				break;

			case 'V':
			case 'v':
				save_records(hptr);
				break;

			case 'T':
			case 't':
				sort_list(&hptr);
				break;

			case 'E':
			case 'e':

				printf("\n");
				printf("S/s : Save and Exit\n");
				printf("E/e : Exit Without Saving\n");
				printf("Enter Your Choice : ");
				scanf(" %c",&exit_choice);

				if(exit_choice=='S' || exit_choice=='s')
				{
					save_records(hptr);
					printf("Thank You.\n");
					return 0;
				}
				else if(exit_choice=='E' || exit_choice=='e')
				{
					printf("Thank You.\n");
					return 0;
				}
				else
				{
					printf("Invalid Choice.\n");
				}

				break;
		}
	}
}
