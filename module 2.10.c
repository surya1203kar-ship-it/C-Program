#include <stdio.h>

void inputArray(int*arr,int n);
void displayArray(int*arr,int n);
int sumArray(int*arr,int n);
int countPositive(int*arr,int n);
int countNegative(int*arr,int n);

int main(){
    int arr[100];
    int n,sum,posCont,negCount;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    inputArray(arr,n);

    printf("\nArray elements are:");
    displayArray(arr,n);

    sum=sumArray(arr,n);\
    printf("\nsum of all elements =%d",sum);

    posCount=countPositive(arr,n);
    negCount=countNegative(arr,n);

    printf("\nNumber of positive elements=%d",posCount);
    printf("\nNumber of negative elements=%d\n",negCount);

    return 0;
}void inputArray(int*arr,int n){
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++){
    scanf("%d",arr+i);
}
}

void displayArray(const int*arr,int n){
for(int i=0;i<n;i++){
    printf("%d",*(arr+i));
}
}

int sumArray(int*arr,int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=*(arr+i);
}
return sum;
}

int countPositive(const int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
    if(*(arr+i)>0)cnt++;
}
return cnt;
}
int countNegative(const int*arr,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)<0)cnt++;
    }
    return cnt;
}





