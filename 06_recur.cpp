#include<iostream>
using namespace std;

void ev_od(int n){

if(n<1){
    return ; ;
}
    if(n%2==0){
        
        ev_od(n-1);
        cout<<n<<endl;
        // cout<<"even";
    }
    else{
        ev_od(n-1);
        // cout<<"odd";
    }
}

int main (){
ev_od(9);
    
}