#include<stdio.h>?
int main()
{
    int a[10],j;
    printf("Enter the values of the arrray\n");
    for(j=0;j<10;j++){
        scanf("%d",&a[j]);
    }
    int search_item;
    printf("Enter the search item:\n");
    scanf("%d",&search_item);
    int i;
    for(i=0; i<6;i++){
        if(a[i]==search_item){
            printf("Item found at:%d",i);
            return 0;
        }
    }
    printf("Item not found\n");
    return 0;
}
