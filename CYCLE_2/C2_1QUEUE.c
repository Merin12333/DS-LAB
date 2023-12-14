#include<stdio.h>
int main()
{
int n,x,i,front=0,end=0,a[10],ch;
printf("\nEnter the limit of the queue\t");
scanf("%d",&n);
do
{
printf("\nMenu :\n1. Insert \t2. Display \t3. Delete \t4.Exit");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:if(end<n)
       {
       printf("\nEnter a number");
       scanf("%d",&x);
       a[end]=x;
       end++;
       }
       else
       printf("\nQueue is full");
       break;
case 2:printf("\nDisplaying\n");
       for(i=front;i<end;i++)
       printf("\t%d",a[i]);
       break;
case 3:if(front==n)
       printf("\nQueue empty");
       else
       {
       front++;
       printf("\nDeleted sucessfully");
       }
case 4:printf("\nExiting");
break;
default:printf("\nWrong choice");
}
}while(ch!=4);
return 0;
}
