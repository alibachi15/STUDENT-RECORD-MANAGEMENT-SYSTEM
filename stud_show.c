#include"student.h"
void printNode(SLL *ptr)
{
if(ptr==0)
{
printf("No Records Found\n");
return;
}
printf("\n************\n RollNo  Name  Percentage \n***********\n");
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
}
