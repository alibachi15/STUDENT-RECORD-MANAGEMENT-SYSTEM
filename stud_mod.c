#include"student.h"

void modifyNode(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No Records Found\n");
		return;
	}

	SLL *t=ptr;
	int rollno,flag=0;
	char ch;
	printf("R->Search by Roll Number\nN->Search by Name\nP->Search by Percentage\n\nSelect your Choice:");
	scanf(" %c",&ch);

	if(ch=='R')  //Searching based on rollnum
	{
ROLLNO:
		printf("Enter the Roll Number:");
		scanf("%d",&rollno);
		ptr=t;
		while(ptr)
		{
			if(ptr->rollno==rollno)
			{
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
AGAIN:
				printf("\n Enter the new name and percentage\n");
				scanf("%s%f",ptr->name,&ptr->percentage);

				if((ptr->percentage<0) || (ptr->percentage>100))
				{
					printf("\n Percentage must and should be within the range of 0 to 100\n");
					goto AGAIN;
				}
				return;
			}
			ptr=ptr->next;
		}
	}

	else if(ch=='N') //Searching based on name
	{
		char n[20];
		printf("Enter a name");
		scanf("%s",n);

		ptr=t;
		while(ptr)
		{
			if(strcmp(ptr->name,n)==0)
			{
				flag++;
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);

				if(flag==1)
					t=ptr;
			}
			ptr=ptr->next;
		}
	}

	else if(ch=='P') //Searching based on percentage
	{
		float p;
		printf("Enter Percentage:\n");
		scanf("%f",&p);
		ptr=t;
		while(ptr)
		{
			if(ptr->percentage==p)
			{
				flag++;
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				if(flag==1)
					t=ptr;
			}
			ptr=ptr->next;
		}
	}

	else
	{
		printf("Wrong Option\n");
		return;
	}

	if(flag==1)
	{
AGAIN1:
		printf("Enter the modified name and percentage:\n");
		scanf("%s%f",t->name,&t->percentage);

		if((t->percentage<0) || (t->percentage>100))
		{
			printf("\n Percentage must be within the range of 0 to 100");
			goto AGAIN1;
		}
		return;
	}

	else if(flag>1)  //////////////
	{
		printf("Multiple(Similar) Data Available in List");
		goto ROLLNO;   //so we must and should go to rollnumber ,no other option
	}
	printf("No Records Found\n");

}


void sortData(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No Records Found\n");
		return;
	}

	char ch;
	printf("Enter Your Option:\n\nN->Sort according to Name\nP->Sort according to Percentage\n");
	scanf(" %c",&ch);

	if(ch=='N')
	{
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;
		p1=ptr;  //Headpointer to first pointer
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;  //second pointer should always be next to first pointer
			for(j=0;j<c-1-i;j++)
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}

	else if(ch=='P')
	{
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;
		p1=ptr;
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(p1->percentage < p2->percentage)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;



				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}
	else
	{
		printf("\n Wrong Option\n");
		return;
	}
	printf("\n Sorting succesfully completed\n");
}


int countNode(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}



void reverseLinks(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No Records Found\n");
		return;
	}

	int i,c=countNode(*ptr);
	if(c>1)
	{
		SLL *t=*ptr;
		SLL **arr=malloc(sizeof(SLL *)*c);

		for(i=0;i<c;i++)
		{
			arr[i]=t;
			t=t->next;
		}

		for(i=c-1;i>0;i--)
			arr[i]->next=arr[i-1];

		arr[0]->next=0;
		*ptr=arr[c-1];  //Update Headptr
	}
	printf("List has been reversed succesfully!\n");
}













