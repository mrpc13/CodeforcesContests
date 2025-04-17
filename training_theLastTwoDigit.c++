#include <iostream>
using namespace std;
int main()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  long long mod = 100;
    long long mul = 1;
    mul = (mul * (a % mod)) % mod;
    mul = (mul * (b % mod)) % mod;
    mul = (mul * (c % mod)) % mod;
    mul = (mul * (d % mod)) % mod;
    if(mul<10){
        cout<<"0"<<mul;
    }
    else
    cout<<mul;
    
}
