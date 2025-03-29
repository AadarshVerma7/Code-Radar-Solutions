// Your code here...
#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int rotate;
    scanf("%d",&rotate);
    while(rotate>0){
        int temp = arr[len-1];
        for(int i=len-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
    }
    for(int j=0;j<len;j++){
        printf("%d ",j);
    }
    return 0;
}