#include<iostream>
using namespace std;

class solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                int temp=a[low];
                a[low]=a[mid];
                a[mid]=temp;
                low++;
                mid++;
            }
            else if(a[mid]==2)
            {
                int temp = a[high];
                a[high] = a[mid];
                a[mid] = temp;
                high--;
            }
            else mid++;
        }
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solution ob;
        ob.sort012(a,n);
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
