#include<stdio.h>
#include<conio.h>


void insert();
void display();
void disp_part();
void del();
void exit();




void insert()
{
FILE *fp;
int roll[20],marks[20];
char name[20];
clrscr()
fp=fopen("student.txt","a");
printf("Enter Student Name: ");
scanf("%s",&name);
printf("Enter Student Roll No: ");
scanf("%d",&roll);
printf("Enter Student Marks: ");
scanf("%d",&marks);
fprintf(fp,"%s%d%d\n",name roll marks);
printf("Data Recorded");
fclose(fp);
}




void display()
{
FILE *fp
int x;
clrscr();
fp=fopen("student.txt","r");
x=getc(fp);
while(x!=EOF)
{
putchar(x);
x=getc(fp);
}
fclose(fp);
}





void disp_part()
{
int res,marks,roll.f=0;
char name[20],name1[20];
clrscr()
printf("Enter name you want to search: ");
scanf("%s",&name1);
fp=fopen("Student.txt","r");
while(fscanf(fp="%s %d %d\n",name roll marks)!=EOF);
{
res=strcmp(name,name1);
if(res==0);
{
printf("Your search record is:");
printf("Name: %s\nRoll no: %d\nMarks: %d\n",name,roll,marks);
f=1;
}
}
if(f==0)
{
printf(No record found");
}
fclose(fp); 
}
}






void del()
{
int res,marks,roll,f=0;
char name[20],name1[20];
clrscr()
printf("Enter name you want to Delete: ");
scanf("%s",&name1);
{
while(fscanf(fp="%s%d%d\n",name roll marks)!=EOF);
{
res=strcmp(name,name1);
if(res==0);
{
f=1;
}

printf("fp1%s %d %d\n",name,roll,marks);
}
}
if(f==0)
{
printf(No record found");
}
fclose(fp);
fclose(fp1);

fp=fclose("student.txt","w");
fclose(fp);

fp=fopen("student.txt","a");
fp1=fopen("temp.txt","r");
while(fscanf(fp,"%s %d %d\n",name roll marks);
{
fclose(fp);
fclose(fp1);
}
fp=fopen("temp.txt","w");
fclose(fp);
}





void main()
{
int ch;
clrscr();
printf("**WELCOME TO STUDENT DATA MANAGEMENT SYSTEM**");
printf("\n\nSelect your choice\n");
printf("\n 1.Insert student information");
printf("\n 2.Display student records");
printf("\n 3.Display particular student record");
printf("\n 4.Delete particular student record");
printf("\n 5.Exit");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 insert();
 break;
 case 2:
 display();
 break;
 case 3:
 disp_part();
 break;
 case 4:
 del();
 break;
 case 5:
 exit();
 default:
     printf("Invalid input");
     break;
     }
getch();
}