#include <bits/stdc++.h>

using namespace std;

int main( )
{
    int ara[ ] = {1, 3, 5, 7, 8, 10, 11};

    int el = 7, n = sizeof(ara) / sizeof(ara[0]), low, mid, high, flag =1;

    low = 0, high = n - 1;

   while(low <= high){

    mid = (low + high) / 2;

    if(el == ara[mid]){

        cout << "found at : " << mid + 1 << " position\n";

        flag = 0;

        break;
    }

    if(el > ara[mid]){

        low = mid + 1;
    }

    if(el < ara[mid]){

        high = mid -1;
    }

   }

   if(flag == 1){

    cout << "\nNot found";
   }
}
