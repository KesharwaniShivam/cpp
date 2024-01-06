// optimized way of question 22
//instead of -1 and *2 with initial 
// we can do +1 and /2 with the final 
// here we divide even no. only to reduce the no. perfectly 
// if the final no. is not even then we do +1;  


#include<bits/stdc++.h>
using namespace std;

int main(){
    int initial =3 , final =4;
    int count = 0;
    if(initial >= final){
        return initial - final;
    }
    while (initial < final)
    {
        if(final % 2 == 0){
            //even
            final /= 2;
        }
        else{
            //odd
            final ++;
            // final += 1;
        
        }
        count++;
    }
    cout<<count;
    
}