// put the zeros of given array at the end;

#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}

for(int j : arr){
    cout<<j<<" ";   
    
}
cout<<endl;

// so the logic is start i with 0 index , it will point to the next index 
// and j check the non zer0 element ,it also start with the zero index , if the index has non zero element it will pass the value to "i"or the value assign to "i";

// sb hone ke bad last sb me arr[i] = 0 assign kr denge

// i ko non zero value assign kr rhe h or , j non zero value dhund rha h 

// 2 0 3 4 5 0 6;

int i =0;
int j = 0;

while (j<n)
{
   if(arr[j] != 0){
      arr[i] = arr[j];
      i++;
      j++;
   }
   else{
    j++;
   }

}
while (i<n)
{
   arr[i] = 0;
   i++;
}

for(int newArr : arr){
    cout<<newArr<<" ";
}



}