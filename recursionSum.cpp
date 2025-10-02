// Sample code for Recursion
// Recursion - recursion is a blockm of code i.e, function calling itself again and again
#include<iostream>
using namespace std;
 
int sum(int a,int b){
    return a+b;
    sum(a,b);             // calling function sum
}
int main(){
    int a=5, b=7;
    cout << sum(a,b) << endl;
    return 0;
}