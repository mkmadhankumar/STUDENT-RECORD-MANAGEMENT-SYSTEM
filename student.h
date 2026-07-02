#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st{
        int roll;
        char name[20];
        float mark;
        struct st *next;
};

void stud_add(struct st **,int);
void sort_list(struct st **);
void stud_del(struct st **);
void stud_show(struct st *);
void stud_mod(struct st **);
void save_records(struct st *);
struct st *load(int *);

