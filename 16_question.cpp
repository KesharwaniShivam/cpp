// print element bigger than the previous element ;

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int> arr = {1,10,3,23,2};   // output  = 1, 10, 23 ;
    // cout<<arr.size();

    vector <int> newArr ;
    int max = arr[0];
    newArr.push_back(max);

for (int i = 0; i < arr.size(); i++)
{
    if(arr[i] > max){
        newArr.push_back(arr[i]);
        max = arr[i];

    }
}
for(int out : newArr){
    cout<<out<<" ";
}

}