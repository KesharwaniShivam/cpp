// print odd no. till N

#include<bits/stdc++.h>
using namespace std; 

void eve_od(int n){
    if(n<1){
        return;
    }
    //even condition
    if(n%2==0){
        eve_od(n-1);
    
    }
    //odd condtion
    else{
      eve_od(n-2);
      cout<<n<<endl;
      
    }
}

int main(){
eve_od(50);
}

