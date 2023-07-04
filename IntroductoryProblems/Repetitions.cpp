#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{   
    string s;
    cin>>s;
    int maxi=0;
    int c=0;

    char l='A';
    for( char d: s){
        if(d==l){
            c++;
            maxi=max(c,maxi);
        }else{
            l=d;
            c=1;
        }
    }
    cout<<maxi;



    return 0;
}