#include "student.h"

void sort_list(struct st **ptr)
{
    struct st *current, *next;
    struct st *prev, *last = NULL;
    char ch;
    int swapped;

    if (*ptr == NULL || (*ptr)->next == NULL)
    {
        printf("No need to sort.\n");
        return;
    }

    printf("R/r : Sort by Roll Number\n");
    printf("N/n : Sort by Name\n");
    printf("P/p : Sort by Percentage\n");
    printf("Enter Your Choice:\n");
    scanf(" %c", &ch);

    if (!(ch == 'R' || ch == 'r' ||
          ch == 'N' || ch == 'n' ||
          ch == 'P' || ch == 'p'))
    {
        printf("Invalid Choice.\n");
        return;
    }

    do
    {
        swapped = 0;
        prev = NULL;
        current = *ptr;

        while (current->next != last)
        {
            next = current->next;

            int condition = 0;

            if (ch == 'R' || ch == 'r')
            {
                if (current->roll > next->roll)
                    condition = 1;
            }
            else if (ch == 'N' || ch == 'n')
            {
                if (strcmp(current->name, next->name) > 0)
                    condition = 1;
            }
            else if (ch == 'P' || ch == 'p')
            {
                if (current->mark > next->mark)
                    condition = 1;
            }

            if (condition)
            {
                current->next = next->next;
                next->next = current;

                if (prev == NULL)
                    *ptr = next;
                else
                    prev->next = next;

                prev = next;
                swapped = 1;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }

        last = current;

    } while (swapped);

    if (ch == 'R' || ch == 'r')
        printf("Sorted by Roll Number Successfully.\n");
    else if (ch == 'N' || ch == 'n')
        printf("Sorted by Name Successfully.\n");
    else
        printf("Sorted by Percentage Successfully.\n");
}
