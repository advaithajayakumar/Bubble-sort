#include<stdio.h>
int main(){
    int i,arr[50],size;
    printf("enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;++i){
        printf("enter the %d element of array",(i+1));
        scanf("%d",&arr[i]);
    }
    return 0;
}