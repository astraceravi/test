#include<iostream>
using namespace std;

int main(){
    int n=10;
    int num1=0;
    int num2=1;

    for(int i=1;i<=n;i++){
        cout<<num1<<" ";
        int num3=num1+num2;
        //swaping
        num1=num2;
        num2=num3;
    }
    return 0;
}