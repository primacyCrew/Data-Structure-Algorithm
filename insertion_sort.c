#include<stdio.h>
int main()
{
    int a[]={4,2,6,-8,3};
    int i, value, hole;
    for(i=1;i<5;i++){
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value){
            a[hole]= a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
    printf("sorted array is :\n");
    for(i=0; i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
