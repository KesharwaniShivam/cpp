#include<iostream>
using namespace std;

int welcome( int n){
if(n==0){
    return 0;
}
//  cout<<"n : "<<n<<endl;  //n= 5,4,3,2,1
welcome(n-1);      //welcome(5-1),welcome(4-1), welcome(3-1), welcome(2-1), welcome(1-1); n==0 wali statement khatm ab sb function me ja ja ke print kr dega 
cout<<"n : "<<n<<endl;  // n=1,2,3,4,5;

}

int main(){
    welcome(5);
}