#include<stdio.h>
void reverseArray(int arr[],int size)
{
int start=0;
int end=size-1;
while(start<end)
{
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
}

int main()
{
int size;
printf("enter the size of an array");
scanf("%d",&size);

int arr[size];
printf("enter %d elements",size);
for(i=0;i<size;i++){
scanf("%d",&arr[i]);}

reverseArray(arr,size);

printf("The reversed array is:");
for(i=0;i<size;i++){
printf("%d",arr[i]);
}
return 0;
}
