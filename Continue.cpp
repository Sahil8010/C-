#include<iostream>
using namespace std;
int main(){
    int num=100;
    for(int i=0;i<=num;i++){
        if(i%3==0){
            continue;
        }
        else{
        cout<<i<<endl;
    }
    }
}