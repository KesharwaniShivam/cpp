#include<bits/stdc++.h>
using namespace std;

int main(){
    // int size;
    // cin>>size;

    // int arr[size];
    // for(int i=0; i<size ; i++){
    //     cin>>arr[i];
    // }

    // // this is ranged based for Loop;
    // for(int value : arr){
    //     cout<<value<<endl;
    // }

//    vector <int> addNum;
   
// addNum.push_back(20);
//    addNum.push_back(12);
//    addNum.pop_back();
//    for(int values : addNum){
//         cout<<values<<endl;
//    }


//Binary search applied in sorted array only so sort the array
// int n;
// cin>>n;
// int arr3[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr3[i];
// }

// // sort the array

// sort(arr3 , arr3+n);

// //binary_search(start_point , end_point , target)
// if (binary_search(arr3 , arr3+n , 3)){   // if present it return true so if(true) so 'present' 
//     cout<<"present";
// }
// else{
//     cout<<"not present";
// }


//vector is dynamic because we can add the element at last after initializing the size or not initialing ,and also we can remove the value from last

vector <int > vac;
// cout<<vac.size()<<endl;

vector<int> vac1(50);
// cout<<vac1.size()<<endl;


// vector <data_type> vector_name(size , element)
vector<string> vac2(4 , "shivam"); // {value/element} dene se sb index pe wahi vale/element store ho jata h
for(string p : vac2){
    // cout<<p<<endl;
}

vector<int> vac3(4 , 4);

vac3[0] = 2;
vac3[1] = 4;
vac3[2] = 6;
vac3[3] = 8;
vac3.push_back(10); // vac3 has size "4" but we push the 5 element thus prove that this is dynamic;
vac3.push_back(12);
for(auto e : vac3){
    // cout<<e<<endl;
}

// set contain Unique element in sorted manner;

// set ,<data_type> set_name;
set<int> s;
s.insert(30);
s.insert(2);
s.insert(2);
s.insert(1);
s.insert(1);

// output : 1,2,30;
for( int el : s){
    // cout<<el<<" ";
}

// sort the given array with unique value , here we use set 
int m;
cin>>m;
int arr4[m];
for (int i = 0; i < m; i++)
{
    cin>>arr4[i];
}

set<int> s1;

for (int i = 0; i < m; i++){
    s1.insert(arr4[i]);
}

for(int ele : s1){
    // cout<<ele<<" ";
}

// agar duplicates chahiye to 'multiset' use kr skte h;

multiset<int > ms;

for (int i = 0; i < m; i++)
{
   ms.insert(arr4[i]);
}
for(int elem : ms){
    cout<<elem<<" ";
}

}