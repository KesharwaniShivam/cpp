// find factorial using recursion 

#include<bits/stdc++.h>
using namespace std;
 
int factorial(int n){

    if (n==0){
        return 1;
    }
// int fanctOfN = factorial(n-1);
//     return n*fanctOfN;
      
      return n*factorial(n-1);                     // we know that fact(4) = 4*fact(3)  , fact(3) = 3*fact(2), fact(2) = 2*fact(1) , fact(1) = 1 *fact(0) ,fact(0) =1;
}

int main(){


cout<<factorial(2)<<endl;
cout<<factorial(3)<<endl;
cout<<factorial(4)<<endl;
cout<<factorial(5)<<endl;
cout<<factorial(6)<<endl;
}