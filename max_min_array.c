#include<stdio.h>

int main(){
int n;

printf("enter the no of elements in array");
scanf("%d", &n);

int arr[n];

printf("enter the elements in array");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int max = arr[0];
int min = arr[0];

for(int i=1;i<n;i++){
if(arr[i]>max)
max=arr[i];

if(arr[i]<min)
min=arr[i];

}
printf("maximum element in array:%d\n",max);
printf("minimum element in array:%d",min);

return 0;
}
