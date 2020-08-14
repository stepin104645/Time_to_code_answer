#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char str[1000];
printf("Enter a string with _  ");
scanf("%s",str);
char *token=strtok(str,"_");
while(token!=NULL){
    printf("\"%s\",",token);
    token=strtok(NULL,"_");

}
return 0;
}
