#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k;
    cin>>i >>j >>k;
    if(i>j && i>k)
    {
        cout<<"Greatest number is" <<i <<"/n";
    }
        else if(j>>i && j>>k)
    {
        cout<<"Greatest number is" <<j <<"/n";
    }
           else
        {
            cout<<"Greatest number is" <<k <<"/n";
        }
}