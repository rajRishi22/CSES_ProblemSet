#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> arr;
    long long int moves=0;
    for(long long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        arr.push_back(a);
    }
     for(long long int i=0;i<n-1;i++){
        if(arr[i+1]<=arr[i]){
            moves=moves+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];
        }   
    }
    cout<<moves;
    return 0;
}