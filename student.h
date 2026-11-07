#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student
{
int rollno;
char name[20];
float percentage;
struct Student *next;
}SLL;

void addRecord(SLL **);
void deleteNode(SLL **);
void printNode(SLL *);
int countNode(SLL *);
void modifyNode(SLL *);
void saveFile(SLL *);
void sortData(SLL *);
void deleteAll(SLL **);
void reverseLinks(SLL **);
void readFile(SLL **);


