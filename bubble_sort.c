#include<stdio.h>
int main(){
    int i,arr[50],size,temp,j;
    printf("enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;++i){
        printf("enter the %d element of array",(i+1));
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(i=0;i<size-1;++i){
        for(j=0;j<size-1-i;++j){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}