#include<iostream>
using namespace std;

int binarySearch(int[],int,int);

main(){

int arr[6]={-4,-3,0,45,78,98};

int index=binarySearch(arr,6,-3);
cout<<"the index of -3 is "<<index;

return 0;
}

int binarySearch(int a[],int n,int key){

    int start,end,mid;
    start=0;
    end=n-1;

    mid=start+(end-start)/2;

    while(start<=end){

        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            start=mid+1;
        }
        if(a[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
     
    }
   return -1;
}
