#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter SubArray Size : "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<endl; //Enter the SubArray
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                //cout<<"All Possible SubArrays is :"<<endl;
                cout<<arr[k]<<" ";   //all possible SubArray will be display as output here
                //cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}