#include"student.h"
int main()
{
SLL *headptr=0;
char op;
readFile(&headptr);
while(1)
{
printf("\033[33m \n******** STUDENT RECORD MENU ********\n");
printf("a)Add New Record\n d)Delete a Record\n s)Show the List\n m)Modify a Record\n v)Save Records\n e)Exit\n t)Sort the List\n l)Delete All The Records\n r)Reverse the List\n \033[0m");
printf("\033[33m \nEnter your Choice:\n");
scanf(" %c",&op);

switch(op)
{
case 'a':addRecord(&headptr);break;
case 'd':deleteNode(&headptr);break;
case 's':printNode(headptr);break;
case 'm':modifyNode(headptr);break;
case 'v':saveFile(headptr);break;
case 'e':printf("Press S->Save and Exit\nPress E->Exit without Saving\n");
	 char ch;
	 scanf(" %c",&ch);
	 if(ch=='S')
	 {
	 saveFile(headptr);
	 deleteAll(&headptr);
	 exit(0);
	 }
	 else if(ch=='E')
	 {
	 deleteAll(&headptr);
	 exit(0);
	 }
	 else
	 printf("Wrong Option\n");
	 break;
case 't':sortData(headptr);break;
case 'l':deleteAll(&headptr);break;
case 'r':reverseLinks(&headptr);break;
default:printf("Invalid Choice\n");
}
}
return 0;
}
