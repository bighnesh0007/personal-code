#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream my_file;
    my_file.open("my_file",ios::out);
    if(!my_file){
        cout<<"File not created!"<<endl;
    }else{
        cout<<"File created successfully!"<<endl;
        my_file<<"Guru99"<<endl;
        my_file.close();
    }

}
