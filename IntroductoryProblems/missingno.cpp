#include<iostream>
#include<vector>

using namespace std;

int main()
{   long long int n;
    cin>>n;
    long long int s=0;
    for(long long int i=1;i<n;i++){
        long long int a;
        cin>>a;
        s=s+a;
    }
    cout<<(n*(n+1))/2-s;

    return 0;
}