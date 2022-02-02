#include<iostream>
using namespace std;

int firstOccurence(int[],int,int);
int lastOccurence(int[],int,int);

main(){

    int arr[6]={2,3,3,3,78,98};

    int firstIndex=firstOccurence(arr,6,3);
    cout<<"the  first index of 3 is "<<firstIndex;

    cout<<endl;

    int lastIndex=lastOccurence(arr,6,3);
    cout<<"the last index of 3 is "<<lastIndex;

    return 0;
}

int firstOccurence(int a[],int n,int key){

    int ans,start,end,mid;
    start=0;
    end=n-1;
    ans=-1;

    mid=start+(end-start)/2;

    while(start<=end){

        if(a[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(a[mid]<key){
            start=mid+1;
        }
        if(a[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
     
    }
   return ans;
}

int lastOccurence(int a[],int n,int key){
    int start,end,ans,mid;
    start=0;
    end=n-1;

    mid=start+(start-end)/2;

    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(a[mid]<key){
            start=mid+1;
        }
        if(a[mid]>key){

            end=mid-1;
        }
        mid=start+(end-start)/2;


    }
    return ans;
}