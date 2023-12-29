// given variable string s contain *'s ans #'s only 
/*
if count of * and # is equal return 0;
if count of * is more than # return positive integer of count  
if count of # is more than * return negative integer of count  
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){

    string s ;
    cin>>s;

    int starCount=0, hashcount=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]== '*'){
            starCount++;
        }
        else{
            hashcount++;
        }
    }
    cout<<starCount - hashcount;
    
}