//Number Star Pattern


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Any Number:";
    cin>>num;
    
    cout<<"*"<<endl;
    
    for(int i=1;i<=num;i++){
        cout<<"*";
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"*";
        cout<<endl;
    }
    
    for(int i=num-1;i>=1;i--){
        cout<<"*";
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"*";
        cout<<endl;
    }
    
    cout<<"*";
    
    
}
