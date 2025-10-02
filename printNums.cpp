#include<iostream>
using namespace std;

int printNums(int n){
    if(n==1){
        cout << "1\n";
        return n;
    }
    cout << n << " ";
    printNums(n-1);
}

int main(){
    printNums(9);
    return 0;
}