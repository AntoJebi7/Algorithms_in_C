#include<stdio.h>
#include<conio.h>
void main()
{
int i, j,n,key,arr[20];
printf("Enter number of elements to use:");
scanf("%d",&n);
printf("Enter %d elements: ",n);
// This loop would store the input numbers in array
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
// Implementation of insertion sort algorithm
for(i=1;i<n;i++){
key=arr[i];
j=i-1;
while((key<arr[j])&&(j>=0)){
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
printf("Sorted elements: ");
for(i=0;i<n;i++)
printf(" %d",arr[i]);
getch();
}