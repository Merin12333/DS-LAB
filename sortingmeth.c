#include<stdio.h>
void bsort(int a[],int n)
{
 int step,temp,i;
 for(step=0;step<n-1;step++)
 {
   for(i=0;i<n-step-1;i++)
   {
     if(a[i]>a[i+1])
     {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
     }
   }
 }
 printf("Sorted array :");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 }
void ssort(int a[],int n)
 
 {
   int i,j,min,t;
   for (i = 0; i < n - 1; i++)
   {
     min= i;
      for (j = i + 1; j < n; j++)
       {
   if (a[j] < a[min])
    min= j;
}
   if (min != i)
{
  t=a[i];
  a[i]=a[min];
  a[min]=t;
         }
  }
 printf("Sorted array :");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 }
 void isort(int a[],int n)
 {
   int i,j,min;
   for(i=1;i<n;i++)
   {
     min=a[i];
     j=i-1;
     while(min<a[j] && j >= 0)
     {
       a[j+1]=a[j];
       j=j-1;
      }
      a[j+1]=min;
    }
    printf("Sorted array :");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 
   }
   
 int main()
 {
  int a[100],n,i,ch;
  printf("Enter the limit of the array :");
  scanf("%d",&n);
  printf("Enter the elements of the array :");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("1.Bubble sort\n2.Selection sort \n3.Insertion sort\n4.Exit\n");
  printf("Enter your choice :");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:bsort(a,n);
           break;
   case 2:ssort(a,n);
          break;
    case 3:isort(a,n);
          break;
   case 4:
         break;
           
    default:printf("Invalid entry");
            break;
   }
   return 0;
  }