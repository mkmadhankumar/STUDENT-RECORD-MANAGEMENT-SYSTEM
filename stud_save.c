#include "student.h"

void save_records(struct st *ptr)
{
    FILE *fptr;

    fptr = fopen("Student_record.txt", "w");

    if(fptr == NULL)
    {
        printf("Unable to Open File.\n");
        return;
    }

    while(ptr != NULL)
    {
        fprintf(fptr,"%d %s %.2f\n",
                ptr->roll,
                ptr->name,
                ptr->mark);

        ptr = ptr->next;
    }

    fclose(fptr);

    printf("Records Saved Successfully.\n");
}
