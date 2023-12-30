// find leader no. in the given array 
// laeader no. means the no. that is greater than all the no. to their right ;

// approach = right se left ki taraf iterate krke check karenge leader no. ,sbse right element to leader hoga hi (usko max bol denge ) ,usse bada koi no. mila to wo bhi leader or usko max bana denge 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[8] = {3,19,6,14,7,15,8,9};  //output = 9 ,15 ,19;

    vector <int> leader ;

    int max = arr[8-1];
    leader.push_back(max);
    for (int i = 8-2; i >=0; i--)
    {
    if (arr[i] > max){
        leader.push_back(arr[i]);
        max = arr[i];
    }
    }
    for(int out : leader){
        cout<<out<<" ";
    }
}