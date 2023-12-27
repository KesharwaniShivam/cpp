// binary search 
// binary search only work on monotonic function (monotonic means element in increasing or decreasing order)
// concept : check (arr[mid]== target)

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0; 
    int end = size-1;

    int mid = (start + end)/2;

    while (start<=end)
    {
        if(arr[mid]== target){
            return mid;
        }
        if(target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

        mid = (start + end)/2;
    }
    return -1;
    
}

int main(){

int evenarr[6] = {1,4,6,19,21,30};
int oddarr[5] = {1,3,5,7,9};

int index = binarySearch(evenarr,6,30);
int index_1 = binarySearch(oddarr,5,3);

cout<<"index of 30 is "<<index<<endl;
cout<<"index of 3 is "<<index_1<<endl;
    
}