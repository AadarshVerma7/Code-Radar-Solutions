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
    while(rotate>0){
        int temp = arr[length-1];
        for(int i = length-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        rotate--;
    }

    for(int i = 0;i<length;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}