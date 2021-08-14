#include<iostream>
using namespace std;

int main(){
    string word;
    cout<<"Enter Word: ";
    cin>>word;
    int len = word.length(); 
    int n = len/2 + 1;
    for(int i = 0; i< n;i++){
        if(word[i] != word[len-i-1]){
            cout<<"Not a pallindrome"<<endl;
            break;
        }
        else{
            if(i==n-1){
                cout<<"A pallindrome"<<endl;
            }
            else{
                continue;
            }
        }

    }
    return 0;
}