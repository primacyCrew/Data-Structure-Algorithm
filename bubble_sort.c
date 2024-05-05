#include<stdio.h>
int main()
{
    int a[]={12,2,5,3,10};
    int i, j, size=5;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(a[j]>a[j+1]){
                int temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    }
    printf("After swaping: \n");
    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
