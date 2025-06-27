#include <iostream>
using namespace std;

void move(int count,char t1,char t2,char t3){
    if(count==0){
        return;
    }
    else{
        move(count-1,t1,t3,t2);
        cout<<"Move disk "<<count<<" from "<<t1<<" to "<<t3<<endl;
        move(count-1,t2,t1,t3);
    }

}

int main(){
    int n;
    cout<<"Enter number of disks";
    cin>>n;
    move(n,'A','B','C');
    return 0;
} 
