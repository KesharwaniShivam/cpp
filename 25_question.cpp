// given a array find the targetd sum 
// do not check sum of same element 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int target = 9;
    int arr[5] = {2,7,11,15,12};

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i+1; j < 5; j++)
    //     {
    //         if((arr[i] + arr[j] == target)){
    //             cout<<i<<" "<<j;
    //             return 0;
    //         }
    //         else{
    //             cout<<"no sum is equal to target";
    //             return 1;
    //         }
    //     }
        
    // }

    for (int i = 0; i < 5 ;i++)
    {
        int j = i+1;
        while (j<5)
        {
            if((arr[i] + arr[j]) == target){
                cout<<i<<" "<<j;
                return 0;
            }
            else{
                j++;
            }
        }
        
    }
    cout<<"sum not present";

}