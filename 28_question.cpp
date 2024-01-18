#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<floor(sqrt(12));
    // cout<<ceil(sqrt(12));
   
    string s = "PLEASESAVEME";

    int length = s.length();
    
    int r = floor(sqrt(length));  // sqrt calculate the sqaure root // floor gives the lower value of approximate value
    int c = ceil(sqrt(length));  // Ceil gives the higher value of the approximate value
    // cout<<r<<" "<<c;

    char arr[r][c];  // because is matrix me hum character store kara rhe hai 
    int k =0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = s[k];
            k++;
        }
        
    }

    string decoded = "";

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
           decoded += arr[i][j];
        
        }
        decoded += " "; 
    
    }

    cout<<decoded;
    

}