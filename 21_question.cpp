/*
At the security checkpoint, airport security personnel have seized a number of travellers’ belongings. Everything has been thrown into a big box (array). Each product carries a specific level of risk[0,1,2]. The risk severity of the items in this case is represented by an array[] of N integer values. Sorting the elements in the array according to the degrees of danger is the task at hand. Between 0 and 2 are the risk values.
Example :
Input :
7  -> Value of N
[1,0,2,0,1,0,2]-> Element of arr[0] to arr[N-1], while input each element is separated by new line.
Output :
0 0 0 1 1 2 2  -> Element after sorting based on risk severity
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"elements will be only 0, 1, 2 "<<endl;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr+n);

    

    for(int output : arr){
        cout<<output<<" ";
    }


    
}