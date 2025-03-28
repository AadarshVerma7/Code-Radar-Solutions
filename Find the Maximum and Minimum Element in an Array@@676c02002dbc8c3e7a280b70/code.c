// Your code here...
#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int j=0;j<len;j++){
        if(arr[j]<min){
            min = arr[j];
        }
        if(arr[j]>max){
            max = arr[j];
        }
    }
    printf("%d %d",min,max);
    return 0;
}