#include<stdio.h>

int main(){

int n;
int sum =0;

printf("enter the no elements in array");
scanf("%d", &n);

int arr[n];

printf("enter the elements in array");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("elements in array are");
for(int i =0; i<n; i++){
sum +=arr[i];
}
printf("sum of array are :%d",sum);

return 0;


}
