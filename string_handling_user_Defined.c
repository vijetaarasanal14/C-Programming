
#include <stdio.h>

int stringlength(char str1[]){
    int i=0;
    while(str1[i]!='\0')
        i++;
        return i;

}

void stringcopy(char src[],char dest[]){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

void stringconcat(char str1[],char str2[]){
    int i=0,j=0;
    while(str1[i]!='\0')
    i++;

    str1[i]=' ';
    i++;

    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}

int stringcmp(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            return str1[i]-str2[i];
            i++;
        }
        return str1[i]-str2[i];
        }
    }

    int main(){
        char str1[50]="hello";
        char str2[50]="world";
        char str3[50];

        printf("length of string is :%d\n",stringlength(str1));

        stringcopy(str1,str3);
        printf("copied string is :%s\n",str3);

        stringconcat(str1,str2);
        printf("concatination of string is :%s\n",str1);

        if(stringcmp(str1,str2)==0){
            printf("Strings are equal");
        }

        else{
            printf("strings are not equal");
        }
        return 0;
        }




