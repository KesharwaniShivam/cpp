// remove the elements from given string by K turns and return the lowest value with 50% discount 

/*
  example 

  sring s = "8394";
  int k = 3

  first sort karenege array ko 
  then remove karnege k turns 
 afer sorting : 9843

  output :  3

  but we use this logic
  if K==n (size of string ,or no. of elements in string) so return 0;
  if not then sort the array, and return the first index of string 
*/

#include<bits/stdc++.h>
using namespace std;

int lower(string s , int k){

if (k==s.size()){
    return 0;
}

sort(s.begin() , s.end());
return s[0] - '0';  //this is the typecast of string to int (or char to int)
}

int main(){

string s ;
int k ;
cout<<"enter string"<<endl;
cin>>s;
cout<<"enter value of K"<<endl;
cin>>k;

cout<<lower(s,k);
// sort(s.begin(), s.end());
// for (int i = 0; i < s.size(); i++)
// {
//    cout<<s[i]<<endl;
// }
// cout<<s[0];
// // cout<<s.size();
}