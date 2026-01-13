#include<stdio.h>

int main(){
int arr[5]={10,20,30,40,50};
int *ptr;
int i;

ptr=arr;

printf("original array\n");
for(i=0;i<5;i++){
printf("%d ",*(ptr+i));
}

//modified array

for(i=0;i<5;i++){
*(ptr+i)=*(ptr+i)+5;
}

printf("\n\n modified array is:\n");
for(i=0;i<5;i++){
printf("%d ",arr[i]);
}

return 0;
}
