#include<stdio.h>
int main(){
int x,j;
int a[7];
int b[]={0,0,0,0,0,0,0};
int h=0,m=7;
int i=1;
printf("enter array:");
for(j=0;j<7;j++){
scanf("%d",&a[j]);
}
printf("my array:");
for(j=0;j<7;j++){
printf("%d\t",a[j]);
}
printf("\n");
printf("the indices after function:");
for(j=0;j<7;j++){
h=a[j]%m;
printf("%d\t",h);
}
printf("\n");
printf("the empty array: ");
for(j=0;j<7;j++){
printf("%d",b[j]);
}
printf("\n");
for(j=0;j<7;j++){
h=a[j]%m;
if(b[h]==0){
b[h]=a[j];
}
else{
while(b[(h+i*i)%m]!=0){
h=(h+i*i)%m;
}
b[(h+i*i)%m]=a[j];
i++;
}
}
for(j=0;j<7;j++){
printf("\n%d",b[j]);
}
