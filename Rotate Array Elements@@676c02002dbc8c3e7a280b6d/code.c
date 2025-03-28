// Your code here...
#include <stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    int rotate;
    scanf("%d",&rotate);
    int arr2[rotate];
    for(int i =length-1;i>=length-rotate;i--){
        int temp = arr[i];
        arr[i] = arr2[i];
        arr2[i] = temp;
    }
    for(int j=0;j<rotate;j++){
        printf("%d",arr2[j]);
    }
    return 0;
}