#include"student.h"
void addRecord(SLL **ptr)
{
	SLL *new,*t=*ptr;
	new=malloc(sizeof(SLL));
AGAIN:
	printf("Enter Name & Percentage\n");
	scanf(" %s%f",new->name,&new->percentage);

	if((new->percentage<0) || (new->percentage>100))
	{
		printf("\n Percentage should be within range from 0 to 100\n");
		goto AGAIN;
	}


	int i,*rollnum,c=countNode(*ptr);
	rollnum=malloc(sizeof(int)*c);

	for(i=0;i<c;i++)
	{
		rollnum[i]=t->rollno;
		t=t->next;
	}

	int rnumber=1,flag;
	while(1)
	{
		flag=0;
		for(i=0;i<c;i++)
		{
			if(rollnum[i]==rnumber)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			new->rollno=rnumber;
			break;
		}
		rnumber++;
	}

	if(*ptr==0 || new->rollno < (*ptr)->rollno)
	{
		new->next=*ptr;
		*ptr=new;
		return;
	}
	else
	{
		SLL *t=*ptr;
		while((t->next!=0) && new->rollno > t->next->rollno)
			t=t->next;

		new->next=t->next;
		t->next=new;


	}
}

