// Your code here...
#include <stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    for(int i = 0;i<length;i++){
        scanf("%d",&arr[i]);
    }   
    int maximum = 0;
    for(int j = 1; j<length-1;j++){
        if(arr[j]>arr[j+1] && arr[j]>arr[j-1]){
            maximum = j;
            break;
        }
    }
    printf("%d",arr[maximum]);
    return 0;
}