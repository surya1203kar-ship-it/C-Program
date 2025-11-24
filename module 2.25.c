#include <stdio.h>

int*getelement(int arr[],int index){
    return &arr[index];
    }
    int main(){
        int arr[5]={4,8,12,16,20};
        int*p=getelement(arr,2);
        printf("element atindex 2=%d\n",*p);
        return 0;
   }
