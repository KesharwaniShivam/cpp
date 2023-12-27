// put zero at the start of given array

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    for(int show : arr){
        cout<<show<<" ";
    }
    cout<<endl;

// 5 0 2 3 0 3


    int i =n-1;
    int j=n-1; 

    while (j>=0)
    {
        if(arr[j] != 0){
            arr[i] = arr[j];
            i--;
            j--;
        }
        else{
            j--;
        }
    }
    while (i>=0)
    {
       arr[i] = 0;
       i--;
    }

    for(int newarr : arr){
        cout<<newarr<<" ";
    }
    
    
}