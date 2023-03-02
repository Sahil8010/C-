#include<iostream>
using namespace std;
int main(){
    //continue statement used for skip next iteration
    //break statement used for stopping
    int date;
    int pocketMoney=3000;
    for(date=0;date<=30;date++){
    }
    if(date%2==0){
        continue;
    }
    if(pocketMoney==0){
        break;
    }
    cout<<"Can go to outside for shopping";
    pocketMoney=pocketMoney-300;
}