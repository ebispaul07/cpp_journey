//Armstrong Number

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Three Digit Number:";
    cin>>num;
    int sum=0,orig,digit;
    
    orig=num;
    
    while(orig>0){
        digit=orig%10;
        sum=sum+digit*digit*digit;
        orig=orig/10;
    }
    
    if(sum==num){
        cout<<" Armstrong";
    }else{
        cout<<" not Armstrong";
    }
    
    
    
}
