/* convert a matrix into lower triangular matrix 

1 1 1        1 0 0 
1 1 1        1 1 0
1 1 1        1 1 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int r = 4 , c = 4;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          cin>>arr[i][j];  
        }
        
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = i+1 ; j < c; j++)
        {
            arr[i][j] = 0;            
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}