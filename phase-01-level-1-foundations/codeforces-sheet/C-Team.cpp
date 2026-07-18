#include <iostream>
using namespace std;

int main() {
    int n,p,v,t,sol=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>v>>t;
        if((p+v+t)>=2)
            sol++;
    }
    cout<<sol;
    return 0;
}