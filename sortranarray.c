#include<stdio.h>
#include<stdlib.h>
void sort(int n,int arr[]){
int i,j,t;
for (i = 0; i < n; i++)
        printf("\n%d ", *(arr + i));
for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(arr + j) < *(arr + i)) {

                t = *(arr+ i);
                *(arr + i) = *(arr + j);
                *(arr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("\n%d ", *(arr + i));
}


int main(){
    int n,p=0;
    int *arr;
    printf("Enter a length of an array\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
        printf("Memory Not allocated");
    else
    {
        printf("Array elements\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
    void (*st)(int,int)=sort;
    st(n,arr);
    }
    return 0;

}
