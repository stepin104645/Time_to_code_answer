#include<stdio.h>
#include<stdlib.h>

int prime(int n){
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) c++;

    }
    if(c==0) return 1;
    else return 0;

}


int main(){
int n;
printf("Enter a Number:\n");
scanf("%d",&n);
if(n==1||n==0){printf("%d is not a prime number",n ); exit;}
int y=prime(n);
if(y==1) printf("%d is a prime number",n);
else printf("%d is not a prime number",n);
return 0;
}


