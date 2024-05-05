#include<stdio.h>
int main()
{
    int a[]={2,4,7,9,12,23,27};
    int item = 9;
    int left, middle, right;
    left=0;
    right=6;
    while(left<=right){
    middle=(left+right)/2;
    if(a[middle] == item){
        printf("Item found at index:%d",middle);
        return 0;
    }
    else if(a[middle]<item){
        left= middle+1;
    }
    else{
        right= middle-1;
    }
    }
    printf("Item not found\n");
    return 0;
}
