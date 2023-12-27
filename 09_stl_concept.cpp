// Map 
// map = key and value;
// each key has one value
// two key can have the same value  (ex. name : "shivam" owner : "shivam")

#include<bits/stdc++.h>
using namespace std; 

int main(){
    // cout<<"shivam";

// map concept ;

/*
   . if map[] (if map value is not defined it can have "empty string"(in string data type) or "0" (in int datatype) )

*/

map <int , int > mp1;

mp1[100] =  1;
mp1[200] = 2; 
mp1[1000] = 10;

// cout<<mp1[1000]<<endl;
// cout<<mp1[50]<<endl;        // this is the new key , so it has value 0;


map < int , string > mp2;

mp2[10] = "shivam";
mp2[30] = "aayush";

// cout<<mp2[10]<<endl;
// cout<<mp2[50]<<endl;    // this will give an empty string in value ;


map <string , string> mp8;

mp8["name"] = "shivam";
mp8["surname"] = "kesharwani";

for(auto name : mp8){
    cout<<name.first<<": " << name.second<<endl;
}


    // word count in given string ;

    string s = "welcometocampusmonk";

    // map < string , int > mp;
    map <char , int > mp;               // in 'char' data_type it can store only one character ;

    for (int i = 0; i < s.size(); i++)
    {
        // mp[{s[i]}] = mp[{s[i]}] + 1;

        mp[{s[i]}]++;

    }
    
// cout<<mp[{s[2]}];

for(auto val : mp){
    // cout<< val.first <<" " << val.second<<endl;
}
      
}