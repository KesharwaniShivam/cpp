/*A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int E[t], L[t];
    cout << "enter elements for e[i]" << endl;
    for (int i = 0; i < t; i++)
    {
        cin >> E[i];
    }
    cout << "enter elements for L[i]" << endl;

    for (int i = 0; i < t; i++)
    {
        cin>>L[i];
    }
   int guest_max = INT_MIN;   // INT_MIN sbse minimum value hoti hai , INT MAX sbse maximum value hota h 
//    int guest_max = E[0] - L[0];
    int guest_count = 0 ;

    for (int i = 0; i <t; i++)
    {
        guest_count += E[i] - L[i];
        if(guest_count > guest_max){
            guest_max = guest_count;
        }
    }
    cout<<"maximum guest count is :"<<endl;
    cout<<guest_max<<endl;
    

    
}