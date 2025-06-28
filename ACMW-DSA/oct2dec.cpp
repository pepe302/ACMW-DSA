#include<iostream>
#include<cmath>
using namespace std;

int oct2dec(int num,int pow){
    if(num==0){
        return 0;
    }
    else{
        int lastDig= num%10;
        return lastDig*std::pow(8,pow)+oct2dec(num/10,pow+1);
    }
}


int main(){
    int num;
    cout<<"Enter octal number: ";
    cin>>num;
    int result =oct2dec(num,0);
    cout<<result<<endl;

}