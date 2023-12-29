/*
{13,3,5,12,4.6,7}  output = 13 , 12 ,7

we have to find leader no. in the given array
 Leaders are the elements that are greater than all the elements to their right in the array.

means 13 bada hai to usse aage ke koi bhi no. bade na ho , so wo ek leader no. hai
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[7] = {13, 3, 5, 12, 4, 6, 7};
    vector<int> newArr;
    for (int i = 0; i < 7; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] < arr[j])
            {
                leader = false;
                break; // break will exit the inner loop
            }
        }
        if (leader == true)
        {
            newArr.push_back(arr[i]);
        }
    }

    for (int out : newArr)
    {
        cout << out << " ";
    }
}