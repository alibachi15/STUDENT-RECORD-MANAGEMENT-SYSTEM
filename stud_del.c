#include"student.h"

void deleteNode(SLL **ptr)  //Delete a single node by node (Single Record)
{
	if(*ptr==0)
	{
		printf("No Records Found\n");
		return;
	}

        int flag=0;
	char name[20];
	char ch;
	printf("R->Enter RollNumber to Delete\nN->Enter Name to Delete\n\nSelect your choice:");
	scanf(" %c",&ch);

	if(ch=='R')
	{
		int rollnum;
ROLLNUM:
		printf("Enter Roll No\n");
		scanf("%d",&rollnum);

		SLL *del,*prev;
		del=*ptr;

		while(del)
		{
			if(del->rollno==rollnum)
			{
				if((flag==1) && (strcmp(del->name,name)!=0))
				{
					printf("Rollno you entered not matching with the name\n");
					return;
				}

				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;

				free(del);
				printf("Record Deleted");
				return;
			}
			prev=del;
			del=del->next;

		}
		printf("\n Roll Number not found\n");
	}





	else if(ch=='N')
	{
		int flag1=0;
		printf("Enter The Name\n");
		scanf("%s",name);

		SLL *del,*prev,*t1,*t2;
		del=*ptr;
		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				flag1++;
				printf("%d %s %f\n",del->rollno,del->name,del->percentage);

				if(flag1==1)
					t1=del;
			}
			prev=del;
			if(flag1==0)
				t2=del;

			del=del->next;

		}
		if(flag1==1)
		{
			del=t1;
			prev=t2;
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;

			free(del);
			printf("\n Record Deleted Succesfully\n");
			return;
		}
		else if(flag1>=2)
			{
				printf("\n Multiple Records Available\n");
				flag=1;
				goto ROLLNUM;
			}
			printf("\n Name not Found\n");
		}

		else
		{
			printf("\n Invalid Option\n");
			return;
		}
}

		void deleteAll(SLL **ptr)  //Delete All Records
		{
			if(*ptr==0)
			{
				printf("Records not found\n");
				return;
			}

			SLL *del=*ptr;

			while(del)
			{
				*ptr=del->next;  //headptr is now pointing to B(example)
				free(del);  //now node A is deleted
				del=*ptr;  //
			}
			printf("All Records Deleted\n");
		}


