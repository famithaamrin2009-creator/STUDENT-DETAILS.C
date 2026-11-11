#include<stdio.h>
#include<string.h>
struct student
{
 char name[20];
 int rollno;
 int mark;
 char city[20];
 char dream[20];
};
void read(struct student S[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("ENTER NAME:");
  scanf("%s",S[i].name);
  printf("ENTER THE ROLLNO:");
  scanf("%d",&S[i].rollno);
  printf("ENTER THE MARKS:");
  scanf("%d",&S[i].mark);
  printf("ENTER THE CITY:");
  scanf("%s",S[i].city);
  printf("ENTER THE DREAM:");
  scanf("%s",S[i].dream);
  }
}

void display(struct student S[],int n)
{
 int i;
 printf("=====STUDENT DETAILS=====");
 for(i=0;i<n;i++)
 {
   printf("\n student name:%s\n",S[i].name);
   printf("\n student roll:%d\n",S[i].rollno);
   printf("\n student mark:%f\n",S[i].mark);
   printf("\n student city:%s\n",S[i].city);
   printf("\n student dream:%s\n",S[i].dream);
 }
}
int main(void)
{
 struct student S[10];
 read(S,10);
 display(S,10);

 return 0;
}