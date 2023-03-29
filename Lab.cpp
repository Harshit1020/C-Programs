#include<iostream>
#include <string.h>
using namespace std;

int main(){
int arr[20],arr1[20];
int i,count=0,len;
cout<<"ENTER THE LENGTH:";
cin>>len;
cout<<"ENTER STRING:";
for(i=0;i<len;i++){
cin>>arr[i];
}
for(i=len-1;i>=0;i--){
if (count==0 && arr[i]==0){
arr1[i]=arr[i];
}
else if(count==0 && arr[i]==1){
count++;
arr1[i]=1;
}
else if (count==1 && arr[i]==1){
arr1[i]=0;
}
else if (count==1 && arr[i]==0){
arr1[i]=1;
}

}
cout<<"2's Complement:";
for(i=0;i<len;i++){
cout<<arr1[i];
}
}
