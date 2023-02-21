#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    //1 Method to transfer from lower to upper or upper to lower

    string s = "pawan bhende";

    //cout << 'a' - 'A';  //just to check the difference between small character and capital character
//1 Method to transfer from lower to upper && upper to lower
    for(int i=0; i<s.size(); i++){
        if(s[i]>= 'a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;

    for(int i=0; i<s.size(); i++){
        if(s[i]>= 'A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s<<endl;


    /////////////////////
//2 Method to transfer from lower to upper or upper to lower
    string str = "dhyaneshwari bhende";

    transform(str.begin(), str.end() , str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
    
///////////////////////////////////////

//"FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING"
//LET'S CODE

// s1 = "1487852";
//to make the biggest number we simply need to sort the number into greater order
//sort(s1.begin(), s1.end(), greater<int>());
    //cout<< s1 << endl;


string s2;
cout<<"Enter number";
for(int i =0; i<s2.size(); i++){
    //cin>>s2[i];
    getline(cin, s2);
}
sort(s2.begin(), s2.end(), greater<int>());
for(int i =0; i<s2.size(); i++){
    cout<<s2;
}
 
    return 0;
}