#include<iostream>
using namespace std;
int main(){
    char button;
    cin>>button;

    switch (button){
    case 'a':
        cout<<"hellp"<<endl;
        break;
    case 'b':
        cout<<"Hello";
        break;
    case 'c':
        cout<<"salut";
        break;

        default:
        cout<<"Other option";
    }
}