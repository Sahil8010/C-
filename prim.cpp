#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            break;
        }
    }
    int i;
    if(i==n){

    }
    cout<<"prime";
    return 0;
}