#include<iostream>
using namespace std;


int gcd(int n1, int n2){
   int r;
   if(n1>n2)
        r = n1%n2;
   else
        r = n2%n1;
   if(r==0)
        return n1;
   else
        return gcd(r,n1);  

}
int main(){
    int n1,n2,n3;
    cout<<"Enter two Numbers ";
    cin>>n1>>n2;
    cout<<"GCD of given Numbers is "<<gcd(n1,n2)<<endl;
    n3 = (n2*n1)/gcd(n1,n2);
    cout<<"LCM of given Number is "<<n3<<endl;
    return 0;
}