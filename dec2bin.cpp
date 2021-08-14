#include<iostream>
using namespace std;

int main(){
    int n,rem;
    cout<<"Enter the number ";
    cin>>n;
    while(n>1){
        rem = n%2;
        cout<<rem;
        n = n/2; 
    }
    cout<<endl;
    return 0;
}