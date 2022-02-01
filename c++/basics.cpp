#include<iostream>
using namespace std;
void display(int[][10],int,int);
string concat (string,string);
int sum(int,int);
main(){
int arr[][10]={
    {1,3,6},
    {4,5,7},
    {6,7,8}
};
int row=3,column=3;

//string result=concat(s1,s2);
//cout<<"the concatenated strings are "<<result;
display(arr,row,column);

return 0;
}
int sum(int num1,int num2){
 return num1+num2;


}
string concat (string st1,string st2){
 return st1+" "+st2;
}

void display(int array[][10],int r,int c){

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<array[i][j]<<" ";

    }
cout<<endl;
}

}