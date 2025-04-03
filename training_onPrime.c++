
#include <iostream>
using namespace std;
int main(){
    int num,isprime=0;
    cin>>num;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
        isprime=1;
        break;
        }
    }
    if(isprime==0)
    cout<<"YES";
    else
    cout<<"NO";
}
