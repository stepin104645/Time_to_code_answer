#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b){
    return a+b;
}
int difference(int a,int b)
{
    return a-b;
}

int main(){
int a,b;
int ch=0;
int c=0;
printf("Enter two integers\n");
scanf("%d\n%d",&a,&b);
//printf("Enter 0 for add\n1 for subtract");
//printf("Enter choice\n");
//scanf("\n%d",&ch);
///int (*su[])(int ,int)={sum,difference};
//if(ch==0||ch==1)
//{c=(su[ch])(a,b);
//printf("\nSum=%d",c);}
//int (*su)(int ,int)=difference;
//c=(su(a,b));
//else printf("Invalid,please enter a correct Option");
int (*su)(int,int)=&sum;
ch=(*su)(a,b);
printf("\nSum=%d",ch);
int (*diff)(int,int)=&difference;
c=(*diff)(a,b);
printf("\nDifference=%d",c);
return 0;

}
