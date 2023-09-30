#include<stdio.h>
int a[50],n,i,top=-1,ch,item;
void push();
void pop();
void display();
int main()
{
printf("Enter the size of the array:");
scanf("%d",&n);
do
{
printf(" \n1.Push \n 2.Pop \n 3.Display \n 4.Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
display();
break;
case 3:
display();
break;
case 4:
break;
default:printf("\n Wrong choice\n");
}
}
while(ch!=4);
return 0;
}
void push()
{
if(top==n-1)
{
printf("\nStack is overflow\n");
}
else
{
printf("Enter the value :");
scanf("%d",&item);
top=top+1;
a[top]=item;
printf("\nElement Inserted Successfully\n");
}
}
void pop()
{
if(top==-1)
{
printf("\nStack is underflow\n");
}
else
{
top=top-1;
printf("\nElement Deleted Successfully\n");
}
}
void display()
{
if(top==-1)
{
printf("\n Stack underflow\n");
}
else
{
printf("\n Array element are:\n");
for(i=0;i<=top;i++)
printf("%d ",a[i]);
}
}
