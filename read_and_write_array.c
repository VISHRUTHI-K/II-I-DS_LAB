PROGRAM:

#include<stdio.h>
int main(){
int a[50],n,i;
printf("enter the array size");
scanf("%d",&n);
printf("enter the elements of the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}



OUTPUT:
enter the array size:4
enter the elements of the array: 2 3 4 5
the array: 2	3	4	5
