#include<iostream>
using namespace std;

int main(){
    int n,max,i;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    for ( i = 0; i < n; i++)
    {
        if(max<=arr[i]){
            max = arr[i];   
        }
        cout<<"Maximum element till index "<<i<<" is "<<max<<endl;
    }
    
    return 0;
}