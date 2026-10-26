#include <stdio.h>
#include <string.h>

 struct student
 {
   char name[20];
   int roll;
   float mark;
   char city[20];
   char dream[20];
 };

 void read(struct student s[],int n)
 {
   int i;
   for(i=0; i<n; i++)
   {
      printf("enter your name:");
      scanf("%s",s[i].name);
      printf("enter roll:");
      scanf("%d",&s[i].roll);
      printf("enter your mark:");
      scanf("%f",&s[i].mark);
      printf("enter your city:");
      scanf("%s",s[i].city);
      printf("enter your dream:");
      scanf("%s",s[i].dream);
   }
 }
 void display(struct student s[],int n)
 {
  int i;
  printf("------------student details--------------");
  for(i=0; i<n; i++)
  {
    printf("student name:  %s\n",s[i].name);
    printf("student roll:  %d\n",s[i].roll);
    printf("student mark:  %f\n",s[i].mark);
    printf("student city:  %s\n",s[i].city);
    printf("student dream: %s\n",s[i].dream);
  }
 }
 int main()
 {
   struct student s[10];
   int n;

   printf("enter the number of the students:");
   scanf("%d", &n);

   read(s,n);
   display(s,n);
   return 0;
 }

