/*
given a string s containing parenthesis 
from string "S" remove the outermost parentheis from every primitive string and then return the string "S"
s = "(()())(())"
iska decomposition hoga aise 
s = p1 + p2 + p3...... here p is primitive string 
where p1 = (()()) , p2 = (())

output : ()()()
*/
/*
logic : outermost paranthesis ko remove karna hai to , usko string s me include nhi karenge 
        outermost '(' ka count 1 kr ke usko add nhi karnege 
        if count greater than 1 hai to string s me add (concatinate krdo) 
        or if s.[i] == '(' to count ++
        if s[i] == ')' so count--
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s ;
    cin>>s;
    int count =0;
    string newSTr = ""; 
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '('){
            count++;
        }
        if(count>1){
            newSTr += s[i];
        }
        
      
       if(s[i] == ')'){
            count--;
        }
         if(count == 0){
        newSTr += ')';
       }
    }
    cout<<newSTr;
}