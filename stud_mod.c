#include "student.h"

void stud_mod(struct st **ptr)
{
    struct st *temp;
    char search_choice, modify_choice;
    int roll, count;
    float mark;
    char name[20];

    if(*ptr == NULL)
    {
        printf("No Records Available.\n");
        return;
    }

    printf("R/r : Search using Roll Number\n");
    printf("N/n : Search using Name\n");
    printf("P/p : Search using Percentage\n");
    printf("Enter Your Choice : ");
    scanf(" %c",&search_choice);

    temp = *ptr;

    switch(search_choice)
    {
        case 'R':
        case 'r':

            printf("Enter Roll Number : ");
            scanf("%d",&roll);

            while(temp)
            {
                if(temp->roll == roll)
                    break;

                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("Record Not Found.\n");
                return;
            }

            break;

        case 'N':
        case 'n':

            printf("Enter Name : ");
            scanf("%s",name);

            count = 0;

            while(temp)
            {
                if(strcmp(temp->name,name)==0)
                    count++;

                temp=temp->next;
            }

            if(count==0)
            {
                printf("Record Not Found.\n");
                return;
            }

            temp=*ptr;

            if(count>1)
            {
                printf("\nMatching Records\n");
                printf("------------------------------------------\n");
                printf("Roll\tName\t\tPercentage\n");
                printf("------------------------------------------\n");

                while(temp)
                {
                    if(strcmp(temp->name,name)==0)
                    {
                        printf("%d\t%s\t\t%.2f\n",
                                temp->roll,
                                temp->name,
                                temp->mark);
                    }

                    temp=temp->next;
                }

                printf("------------------------------------------\n");

                printf("Enter Roll Number : ");
                scanf("%d",&roll);

                temp=*ptr;

                while(temp)
                {
                    if(temp->roll==roll && strcmp(temp->name,name)==0)
                        break;

                    temp=temp->next;
                }

                if(temp==NULL)
                {
                    printf("Invalid Roll Number.\n");
                    return;
                }
            }
            else
            {
                while(temp)
                {
                    if(strcmp(temp->name,name)==0)
                        break;

                    temp=temp->next;
                }
            }

            break;

        case 'P':
        case 'p':

            printf("Enter Percentage : ");
            scanf("%f",&mark);

            count=0;

            while(temp)
            {
                if(temp->mark==mark)
                    count++;

                temp=temp->next;
            }

            if(count==0)
            {
                printf("Record Not Found.\n");
                return;
            }

            temp=*ptr;

            if(count>1)
            {
                printf("\nMatching Records\n");
                printf("------------------------------------------\n");
                printf("Roll\tName\t\tPercentage\n");
                printf("------------------------------------------\n");

                while(temp)
                {
                    if(temp->mark==mark)
                    {
                        printf("%d\t%s\t\t%.2f\n",
                                temp->roll,
                                temp->name,
                                temp->mark);
                    }

                    temp=temp->next;
                }

                printf("------------------------------------------\n");

                printf("Enter Roll Number : ");
                scanf("%d",&roll);

                temp=*ptr;

                while(temp)
                {
                    if(temp->roll==roll && temp->mark==mark)
                        break;

                    temp=temp->next;
                }

                if(temp==NULL)
                {
                    printf("Invalid Roll Number.\n");
                    return;
                }
            }
            else
            {
                while(temp)
                {
                    if(temp->mark==mark)
                        break;

                    temp=temp->next;
                }
            }

            break;

        default:
            printf("Invalid Choice.\n");
            return;
    }

    printf("\n");
    printf("N/n : Modify Name\n");
    printf("P/p : Modify Percentage\n");
    printf("Enter Your Choice : ");
    scanf(" %c",&modify_choice);

    switch(modify_choice)
    {
        case 'N':
        case 'n':

            printf("Enter New Name : ");
            scanf("%s",temp->name);

            printf("Name Modified Successfully.\n");
            break;

        case 'P':
        case 'p':

            printf("Enter New Percentage : ");
            scanf("%f",&temp->mark);

            printf("Percentage Modified Successfully.\n");
            break;

        default:

            printf("Invalid Choice.\n");
    }
}
