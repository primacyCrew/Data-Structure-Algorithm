#include<stdio.h>
int main()
{
    int a[5]= {4,6,2,9,90};
    int i,j, min_index;
    for(i=0; i<5; i++)
    {
        min_index=i;
        for(j=i+1; j<5; j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
                int temp=a[i];
                a[i]= a[min_index];
                a[min_index]= temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for(i=0; i<5; i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}
