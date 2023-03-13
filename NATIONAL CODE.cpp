#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       string code;
       cin >> code;
       int pos = code.find("084");
       code . erase(pos,3);
       cout << code<< endl;
    }
}