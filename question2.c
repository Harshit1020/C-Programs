#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("entr the size of arr:");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i<n; i++){

        scanf("%i",&a[i]);
    }
for(int i=0; i<n; i++){

        if(a[i]>0){

                sum=sum+a[i];
        }
}
    printf("sum of non negative number is %i :",sum);

    return 0;

}