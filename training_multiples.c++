#include <iostream>
using namespace std;
 
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    if(x!=0 && y!=0){
        if((x%y==0) || (y%x==0)){
        cout<<"Multiples";
    }
    else{
       cout<<"No Multiples";
    }
    }
}
