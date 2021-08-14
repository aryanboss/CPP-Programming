//Given an unsorted array of integers, find a subarray that adds to a given number. If there is more than one subarray with the sum of the given number, print any of them
#include<iostream>
using namespace std;

int main(){
    int n,sum,fsum;
    cout<<"Enter lenghth of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Sum ";
    cin>>sum;

    for (int i = 0; i < n; i++)
    {
        fsum = 0;
        for (int j = i; j < n; j++)
        {
            fsum = fsum+arr[j];
            if(fsum == sum){
                cout<<"Subarray found between "<<i<<" and "<<j;
                exit(0);
            }
            else{
                continue;
            }
        }
        
    }
    cout<<"There is no subarray present"<<endl;

    return 0;
}