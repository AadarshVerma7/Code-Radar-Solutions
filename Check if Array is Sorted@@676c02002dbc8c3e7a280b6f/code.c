// Your code here...
#include <stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    for(int i = 0; i<length; i++){
        scanf("%d",&arr[i]);
    }
    int sort = 0;
    for(int j = 0; j<=length-2;j++){
        if(arr[j]<=arr[j+1]){
            sort = 1;
        }
    }
    // if(length = 1){
    //     sort = 1;
    // }
    if(sort){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}