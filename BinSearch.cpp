#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if (arr[mid]<=tar){
            return binSearch(arr,tar,mid+1,end);
        }else{
            return binSearch(arr,tar,st,mid-1);
        } 
    }
    return -1;
}

int main(){
    vector<int>arr={2,4,5,6,9,12};
    int tar=6;
    int result=binSearch(arr,tar,0,arr.size()-1);
    cout << result;
    return 0;
}