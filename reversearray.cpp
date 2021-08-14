#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int n,i;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array is ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for ( i = 0; i < (n/2); i++)
    {
        swap(&arr[i],&arr[n-i-1]);
    }
    cout<<"Reversed array is ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}