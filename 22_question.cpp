/*
two integer variable intial and final
we have to make initial == final;
ex if initial = 7 and final = 8 ; so
we can apply two operation to make i = f ;
1st : n-1
2nd : n*2
and return min no. of step in which we can achieve this i=f
*/

#include <bits/stdc++.h>
using namespace std;

int operatation_1(int initial , int final){

int count_1 = 0;

    while (initial != final)
    {
        initial = initial - 1;
        count_1++;
        while (initial != final)
        {

            if (initial < final)
            {
                initial = initial * 2;
                count_1++;
            }
            else
            {
                initial = initial - 1;
                count_1++;
            }
        }
    }

    // cout << count_1<<endl;
    return count_1;
}

int operatation_2(int initial , int final){
    int count_2 = 0;

    while (initial != final)
    {

        initial = initial * 2;
        count_2++;

        while (initial != final)
        {

            if (initial > final)
            {
                initial = initial - 1;
                count_2++;
            }
            else
            {
                initial = initial * 2;
                count_2++;
            }
        }
    }
    return count_2;
}

int main()
{

    int initial, final;
    initial = 3;
    final = 4;

cout<< "minimum steps : "<<min(operatation_1(initial,final) , operatation_2(initial,final));

    // cout<<operatation_1(initial , final)<<endl;
    // cout<<operatation_2(initial , final);

    // int count_1 = 0;

    // while (initial != final)
    // {
    //     initial = initial - 1;
    //     count_1++;
    //     while (initial != final)
    //     {

    //         if (initial < final)
    //         {
    //             initial = initial * 2;
    //             count_1++;
    //         }
    //         else
    //         {
    //             initial = initial - 1;
    //             count_1++;
    //         }
    //     }
    // }

    // // cout << count_1<<endl;
    // return count_1;

    // int count_2 = 0;

    // while (initial != final)
    // {

    //     initial = initial * 2;
    //     count_2++;

    //     while (initial != final)
    //     {

    //         if (initial > final)
    //         {
    //             initial = initial - 1;
    //             count_2++;
    //         }
    //         else
    //         {
    //             initial = initial * 2;
    //             count_2++;
    //         }
    //     }
    // }
    // cout<<count_2;
   
}