// Your code here...
#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int find;
    scanf("%d",&find);
    int index = -1;
    for(int i=0;i<len;i++){
        if(arr[i] == find){
            index = i;
        }
    }
    printf("%d",index);
    return 0;
}