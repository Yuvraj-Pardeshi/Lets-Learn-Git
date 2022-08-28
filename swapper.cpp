#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int i = 0;
    while(i+1<size){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}