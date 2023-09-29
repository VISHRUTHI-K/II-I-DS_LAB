PROGRAM:

#include<stdio.h>
int main(){
int a[50],n,i,pos;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the elements of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

printf("\nenter the position of the element:");
scanf("%d",&pos);

for(i=pos-1;i<n;i++)
a[i]=a[i+1];
n=n-1;
printf("the new array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}


OUTPUT:

enter the array size:4
enter the elements of the array: 4 5 6 7
the array: 4	5	6	7	
enter the position of the element:4
the new array: 4	5	6	
