#include<iostream>

using namespace std;

int main(){

    int x;
    cout<<"Enter First Number:"<<endl;
    cin>>x;

    int y;
    cout<<"Enter Second Number: "<<endl;
    cin>>y;

    if(x>y && x==y){
        cout<<"Both conditions are correct"<<endl;
    }else if(x<y ||x<=y){
        cout<<"Only one condition is True"<<endl;
    }else if(!(x>y)){
        cout<<"NOT"<<endl;
    }else{
        cout<<"Error"<<endl;
    }




}