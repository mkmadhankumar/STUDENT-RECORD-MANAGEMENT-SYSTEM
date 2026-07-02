#include "student.h"

void stud_add(struct st **ptr, int count)
{
    struct st *temp = (struct st *)malloc(sizeof(struct st));
    struct st *p, *prev;
    int roll = 1, found;

    while (1)
    {
        found = 0;
        p = *ptr;

        while (p != NULL)
        {
            if (p->roll == roll)
            {
                found = 1;
                break;
            }
            p = p->next;
        }

        if (found == 0)
            break;

        roll++;
    }

    temp->roll = roll;

    printf("Enter Student Name and Percentage:\n");
    scanf("%19s%f", temp->name, &temp->mark);

    temp->next = NULL;

    if (*ptr == NULL)
    {
        *ptr = temp;
        return;
    }

    if (roll < (*ptr)->roll)
    {
        temp->next = *ptr;
        *ptr = temp;
        return;
    }

    p = *ptr;
    prev = NULL;

    while (p != NULL && p->roll < roll)
    {
        prev = p;
        p = p->next;
    }

    temp->next = p;
    prev->next = temp;
}
