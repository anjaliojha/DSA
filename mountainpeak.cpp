#include <iostream>
using namespace std;

int mountainPeak(int[],int);

main(){

    int arr[6]={2,3,5,4,1,0};
    int peak=mountainPeak(arr,6);
    cout<<peak;

    return 0;


}
int mountainPeak(int a[],int n){

    int end,start,mid;
    start=0;
    end=n-1;

    mid=start+(end-start)/2;

    while(start<end){

        if(a[mid]<a[mid+1]){

            start=mid+1;
        }
        else{

            end=mid;
        }
        mid=start+(end-start)/2;
    }

    return end;


}