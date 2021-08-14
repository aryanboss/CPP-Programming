#include<iostream>
using namespace std;


string repeat(string s, int n)
{
    // Copying given string to temporary string.
    string s1 = s;
 
    for (int i=1; i<n;i++)
        s += s1; // Concatenating strings
 
    return s;
}

int main(){
    int n,i,j,k;
    cout<<"Enter The Hight of Pyramid ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n-i-1;j>=0;j--){
            cout<<" ";
        }
        string s = "*";
        cout << repeat(s, (2*i-1));
        for(j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}