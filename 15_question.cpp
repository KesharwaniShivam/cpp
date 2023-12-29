// array of score of class having size n;
// score[i]  represents score of roll no. score[i+1]
/*
student with odd roll no. are in team blue,
student with even roll no. are in team green

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int score[n];

    for (int i = 0; i < n; i++)
    {
        cin>>score[i];
    }
    
// cout<<"shhivam";
/* 
0%2 = 0 , 1%2 = 1 , 2%2 = 0 , 3%2= 1......
*/
    vector<int> blue;
    vector<int> green;


   for (int i = 0; i < n; i++)
   {
    if(i%2 == 0){          // score[5] = {10,32,45,43,11} 
                           //    index=  {0 ,1 ,2 ,3 ,4 }
                                      //{ 0, 1, 0 ,1 ,0}   odd position me "0", even position me "1"
                                      //{1, 2 , 3 ,4, 5}
        blue.push_back(score[i]);
    }
    else{
        green.push_back(score[i]);
    }
   }
  cout<<"blue team"<<endl;
   for(int out : blue){
    cout<<out<<endl;
   }
   cout<<"green team"<<endl;
   for(int put : green){
    cout<<put<<endl;
   }
   
}