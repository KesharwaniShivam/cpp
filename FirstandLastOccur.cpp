//first and last occurance of element in array
//using binary search

#include<bits/stdc++.h>
using namespace std;

int firstoccur(int arr[], int size, int target){
    int s= 0;
    int e= size-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if(arr[mid]==target){
            ans = mid;
            e = mid -1;
        }

        if (target > arr[mid])
        {
            s= mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    
        
    }
    return ans;

}

int LastOccur(int arr[], int size, int target){

    int s =0;
    int e = size-1;

    int mid = s + (e-s)/2;
    int anss = -1;

    while (s<=e)
    {
        if (arr[mid]==target){

            anss = mid;
            s= mid + 1; 
        }
        else if(target > arr[mid]){
            s = mid +1;
        }
        else if(target < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return anss;
}

int main(){

int arr[6] = {1,3,3,3,3,7};
int arr_2[7] = {1,2,2,3,3,3,4};

// int ind = firstoccur(arr_2,7, 3);
//    cout<<"first index of 3 is "<<ind<<endl;

//    int Lindex = LastOccur(arr_2,7 , 3);

//    cout<<"last index of 3 is "<<Lindex<<endl;

pair <int, int> p;

p.first = firstoccur(arr_2, 7, 3);
p.second = LastOccur(arr_2, 7, 3);

// cout<<p.first<<endl<<p.second;

// total no. of occurance of an element in a array

int total = (p.second - p.first) + 1;
cout<<"total no. of occurance of 3 in arr_2 is "<<total;
}