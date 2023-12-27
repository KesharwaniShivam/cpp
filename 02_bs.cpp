#include <bits/stdc++.h>
using namespace std;

int bnsearch(int arr[] , int n, int target){
    int start, end, mid;
    start = 0 ;
    end= n-1;
    mid = start + (end - start)/2;

    // cout<<"mid : " << mid<<endl;

    while (start<=end)
    {
        if(arr[mid] == target){
        return mid;
        }

        else if(arr[mid] > target ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }
    return -1;

}

int main()
{

int arr[5] = { 1,2,3, 6,10};

int bn = bnsearch(arr, 5, 6);
cout<<"index :"<<bn;
}