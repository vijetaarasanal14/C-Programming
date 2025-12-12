#include<stdio.h>

int main(){
int n;

printf("enter the elements in array");
scanf("%d",&n);

int arr[n];

printf("elements %d in array:");
for(int i = 0;i < n;i++){
scanf("%d", &arr[i]);
}

printf("elements in array are:");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}

return 0;
}
