/*
Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
Note : 1st element of the array should be considered in the count of the result.
ex = arr[5]  = { 3,6,2,7,8} 
output = 4; ( 3 se pehle kuch hai nhi to wo bada h , 6 uske prior elment se bada h , then 7 uske prior elements se bada hai , then 8 )(3,6,7,8)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n ; i++)
    {
       cin>>arr[i];
    }
if(n!=0){
    int count = 1;

    int max= arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            count++;
            max = arr[i];
        }
    }
    cout<<"count is : "<<count<<endl;
  
    
}
else{
    cout<<"array has no elements"<<endl;
}

}