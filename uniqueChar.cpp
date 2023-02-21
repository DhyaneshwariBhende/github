#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    int k;
    for(int i=0; i<s.size(); i++)
    {
        k=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[i] == s[j] and i!=j)
            {
                k=1;
                break;
            }
        }
        if(k==0)
            cout<<"Unique Char are: " <<s[i];
    }


    return 0;
  
    //return 0;
}