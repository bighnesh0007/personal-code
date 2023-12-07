#include<iostream>
using namespace std;


int main() {
    char ch = 'a';
    int num=1;
    cout<<endl;
    switch (num)
    {
    case 1:
        cout<<"First"<<endl;
        break;
    case 2:
        cout<<"Second"<<endl; 
    break;
    
    default:
        cout<<"it's a defalut case"<<endl;
        break;
    } 
}