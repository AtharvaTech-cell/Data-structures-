#include<iostream>
using namespace std;
int main(){
int arr[10],n,element;
int low,high,mid;

cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter sorted array elements:\n";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"Enter element to search: ";
cin>>element;
low=0;
high=n-1;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]==element){
break;
}
else if(arr[mid]<element){
low=mid+1;
}
else{
high=mid-1;
}
}

}