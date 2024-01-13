// two sum

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>arr , int target){
    vector<int> temp = arr;

    sort(temp.begin(), temp.end()); // 2,5,7,11,25
    int i = 0;
    int n = temp.size();
    int j = n - 1;
    int n1, n2;
    while (i < j)
    {
        if ((temp[i] + temp[j]) == target)
        {
            n1 = temp[i];
            n2 = temp[j];
            break;
            
        }
        else if ((temp[i] + temp[j]) > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n1)
        {
            ans.push_back(i);
        }
        else if (arr[i] == n2)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {2, 7, 5, 11, 15};
    int target = 12;

for(auto o : twoSum(arr,target)){
    cout<<o<<" ";
}
    
}