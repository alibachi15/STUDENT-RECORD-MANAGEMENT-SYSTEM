#include"student.h"
void saveFile(SLL *ptr)
{
if(ptr==0)
{
printf("No Records Found\n");
return;
}
FILE *fp;
fp=fopen("student.dat","w");

while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}

printf("Data Saved Into The File\n");
fclose(fp);
}

void readFile(SLL **ptr)
{
FILE *fr;
fr=fopen("student.dat","r");

if(fr==0)
{
return;  //Because there is no data inside file(File is not present)
}

while(1)
{
SLL *new,*last;
new=malloc(sizeof(SLL));

if((fscanf(fr,"%d%s%f",&new->rollno,new->name,&new->percentage))==EOF)
break;

new->next=0;
if(*ptr==0)
*ptr=new;

else
{
last=*ptr;  
while(last->next)
last=last->next;

last->next=new;
}
}
printf("Data in File Copied Succesfully\n");
}
