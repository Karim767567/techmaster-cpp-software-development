#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x.length()>10)
            cout<<x[0]<<x.length()-2<<x[x.length()-1];
        else
            for(int i=0; i<x.length(); i++){
                cout<<x[i];
            }
            cout<<endl;
    }
    return 0;
}
