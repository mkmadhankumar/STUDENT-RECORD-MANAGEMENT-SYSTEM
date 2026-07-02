#include "student.h"

struct st *load(int *count)
{
    FILE *fptr;
    struct st *head = NULL;
    struct st *temp, *last;

    int roll;
    char name[20];
    float mark;

    *count = 0;

    fptr = fopen("Student_record.txt","r");

    if(fptr == NULL)
    {
	printf("No previous Record found.\n");
        return NULL;
    }

    while(fscanf(fptr,"%d %s %f",&roll,name,&mark)==3)
    {
        temp = (struct st *)malloc(sizeof(struct st));

        temp->roll = roll;
        strcpy(temp->name,name);
        temp->mark = mark;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            last = head;

            while(last->next != NULL)
                last = last->next;

            last->next = temp;
        }

        (*count)++;
    }

    fclose(fptr);

    return head;
}
