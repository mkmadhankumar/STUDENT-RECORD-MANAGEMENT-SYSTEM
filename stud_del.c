#include "student.h"

void stud_del(struct st **ptr)
{
    struct st *temp, *prev;
    int roll, found = 0;
    char choice;
    char name[20];

    if (*ptr == NULL)
    {
        printf("No records available.\n");
        return;
    }

    printf("R/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n");
    printf("Enter Your Choice:\n");
    scanf(" %c", &choice);

    if (choice == 'R' || choice == 'r')
    {
        printf("Enter Roll Number:\n");
        scanf("%d", &roll);

        temp = *ptr;
        prev = NULL;

        while (temp != NULL)
        {
            if (temp->roll == roll)
            {
                if (prev == NULL)
                    *ptr = temp->next;
                else
                    prev->next = temp->next;

                free(temp);
                printf("Record Deleted Successfully.\n");
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        printf("Roll Number Not Found.\n");
    }

    else if (choice == 'N' || choice == 'n')
    {
        printf("Enter Name:\n");
        scanf("%s", name);

        temp = *ptr;

        printf("-------------------------------------------\n");
        printf("%-8s %-15s %-10s\n", "Roll", "Name", "Mark");
        printf("-------------------------------------------\n");

        while (temp != NULL)
        {
            if (strcmp(temp->name, name) == 0)
            {
                printf("%-8d %-15s %-10.1f\n",
                        temp->roll,
                        temp->name,
                        temp->mark);
                found = 1;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Record Not Found.\n");
            return;
        }

        printf("-------------------------------------------\n");

        printf("Enter Roll Number to Delete:\n");
        scanf("%d", &roll);

        temp = *ptr;
        prev = NULL;

        while (temp != NULL)
        {
            if (temp->roll == roll)
            {
                if (strcmp(temp->name, name) == 0)
                {
                    if (prev == NULL)
                        *ptr = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);

                    printf("Record Deleted Successfully.\n");
                    return;
                }
            }

            prev = temp;
            temp = temp->next;
        }

        printf("Record Not Found.\n");
    }

    else
    {
        printf("Invalid Choice.\n");
    }
}
