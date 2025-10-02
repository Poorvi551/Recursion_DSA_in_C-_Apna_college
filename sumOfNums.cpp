#include<iostream>
using namespace std;

int sumofNums(int n){
    if(n==1){
        return n;
    }
    return n + sumofNums(n-1);
}

int main(){
    cout << sumofNums(10) << endl;    // 10+9+8+7+6+5+4+3+2+1 = 55
    return 0;
}