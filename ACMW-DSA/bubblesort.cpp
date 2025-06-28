#include<iostream>
#include<vector>

using namespace std;

bool bubble(int arr[], int n){
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            flag=true;
        }
    }
    return flag;
}

void recurs(int arr[],int n){
    if(n==1) return;
    if(!bubble(arr,n)) return;
    recurs(arr,n-1);
}

int main(){
    int num;
    std::vector<int> arr;
    cout<<"Enter array: (ctrl+D to end)";
    while(cin>>num){
        arr.push_back(num);
    }
    int arrLen=arr.size();
    recurs(arr.data(), arrLen);
    for(int i=0;i<arrLen;i++){
        cout<<arr[i]<<endl;
    }

}