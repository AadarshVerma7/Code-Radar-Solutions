// Your code here...
#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }   
    int temp_arr = {0};
    int max = 0;
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max = i;
        }
    }
    int temp = arr[max];
    arr[max] = temp_arr[0];
    temp_arr[0] = arr[max];

    int max2 = arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("%d",max2);
    return 0;
}