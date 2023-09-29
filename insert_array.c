PROGRAM:

#include<stdio.h>
int main(){
int a[50],n,i,item,pos;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the elements of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\nenter the new element:");
scanf("%d",&item);
printf("enter the position of the element:");
scanf("%d",&pos);
n=n+1;
for(i=n;i>=pos-1;i--)
a[i]=a[i-1];
a[pos-1]=item;
printf("the new array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

OUTPUT:
enter the array size:4
enter the elements of the array: 2 3 4 5
the array: 2	3	4	5	
enter the new element:9
enter the position of the element:3
the new array: 2	3	9	4	5	
