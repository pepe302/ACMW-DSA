#include<iostream>
#include<string>
using namespace std;

void reverse(string str){
    int len=str.length();
    if(str.empty()){
        return;
    }
    else{
        reverse(str.substr(1));
        cout<<str[0];
    }
}


int main(){
    string str;
    cout<<"Enter string ";
    getline(cin,str);
    reverse(str);
    cout<<endl;
    return 0;
}