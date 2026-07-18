#include <iostream>
using namespace std;

int main() {
    int n,x=0;
    char s[3];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[0]>>s[1]>>s[2];
        if((s[0]=='X' && s[1]=='+' && s[2]=='+') || (s[0]=='+' && s[1]=='+' && s[2]=='X'))
            x++;
        else
            x--;
    }
    cout<<x;
    return 0;
}
