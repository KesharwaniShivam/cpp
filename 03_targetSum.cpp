// target sum using binary search

#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int target; 
    cout<<"target"<<endl;
    cin>>target;
    
    cout<<"enter size of array"<<endl;
    int n ;
    cin>>n;

    int arr[n]; 
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int start ,end ,mid;
    start = 0 ;
    end = n-1;
    mid = start + (end - start)/2;

    int find ,num;

    for(int i = 0; i<n; i++){
        num = arr[i];
        
   
    find = target - num;

while (start<=end)
    {
        if(find == arr[mid]){   // 40 - 2 = 38 
        cout<<"yes"<<mid<<endl;
        }

        else if(arr[mid] > target ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }
     }
    return -1;
}